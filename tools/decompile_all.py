# Ghidra headless script: decompile all functions to C source
# @category Decompilation
# @runtime Jython

from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.program.model.data import DataTypeWriter
from ghidra.program.model.listing import CodeUnit
import os
import re

output_dir = os.path.dirname(str(currentProgram.getExecutablePath()))
if not output_dir or output_dir == "/":
    output_dir = getScriptArgs()[0] if len(getScriptArgs()) > 0 else "."

# Set up decompiler
monitor = ConsoleTaskMonitor()
decomp = DecompInterface()
opts = DecompileOptions()
decomp.setOptions(opts)
decomp.openProgram(currentProgram)

listing = currentProgram.getListing()
func_manager = currentProgram.getFunctionManager()
dtm = currentProgram.getDataTypeManager()

# Collect all data types used
all_types = set()
all_typedefs = []

# Collect forward declarations and function prototypes
prototypes = []
function_bodies = []
global_data = []

print("[*] Decompiling %d functions..." % func_manager.getFunctionCount())

# Decompile all functions
func_iter = func_manager.getFunctions(True)
count = 0
errors = 0

while func_iter.hasNext():
    func = func_iter.next()
    count += 1

    results = decomp.decompileFunction(func, 60, monitor)

    decomp_func = results.getDecompiledFunction() if results else None
    if decomp_func:
        c_code = decomp_func.getC()
        sig = decomp_func.getSignature()

        if c_code:
            function_bodies.append("/* Function: %s @ 0x%s */\n%s" % (
                func.getName(), func.getEntryPoint().toString(), c_code))
            if sig:
                prototypes.append(sig + ";")
        else:
            errors += 1
            function_bodies.append("/* FAILED to decompile: %s @ 0x%s */" % (
                func.getName(), func.getEntryPoint().toString()))
    else:
        errors += 1
        err_msg = ""
        if results:
            err_msg = str(results.getErrorMessage()) if results.getErrorMessage() else ""
        function_bodies.append("/* FAILED to decompile: %s @ 0x%s -- %s */" % (
            func.getName(), func.getEntryPoint().toString(), err_msg))

    if count % 50 == 0:
        print("[*] Decompiled %d functions..." % count)

print("[*] Decompiled %d functions total (%d errors)" % (count, errors))

# Collect global/static data with labels
print("[*] Collecting defined data...")
data_items = []
data_iter = listing.getDefinedData(True)
while data_iter.hasNext():
    d = data_iter.next()
    label = d.getLabel()
    dt = d.getDataType()
    val = d.getDefaultValueRepresentation()
    addr = d.getAddress()

    if label and not label.startswith("DAT_") and not label.startswith("PTR_"):
        data_items.append("/* 0x%s */ // %s %s = %s;" % (
            addr.toString(), dt.getDisplayName(), label, val))

# Export data types
print("[*] Exporting data types...")
type_output_path = os.path.join(output_dir, "MMath_types.h")
import java.io
writer = java.io.FileWriter(type_output_path)
dtw = DataTypeWriter(dtm, writer)
try:
    # Write all non-builtin types
    for dt in dtm.getAllDataTypes():
        cat = dt.getCategoryPath().toString()
        if not cat.startswith("/BuiltInTypes"):
            try:
                dtw.write(dt, monitor)
            except:
                pass
    writer.flush()
    writer.close()
    print("[+] Types written to: %s" % type_output_path)
except Exception as e:
    print("[-] Error writing types: %s" % str(e))
    writer.close()

# Write the main decompiled source
src_path = os.path.join(output_dir, "MMath_decompiled.c")
with open(src_path, "w") as f:
    f.write("/*\n")
    f.write(" * Decompiled from: MMath.exe\n")
    f.write(" * Using: Ghidra Headless Decompiler\n")
    f.write(" * Architecture: x86 (PE32)\n")
    f.write(" * Functions: %d (%d failed)\n" % (count, errors))
    f.write(" *\n")
    f.write(" * NOTE: This is machine-generated decompilation output.\n")
    f.write(" * Variable names, types, and control flow may need manual refinement.\n")
    f.write(" */\n\n")

    f.write("#include <windows.h>\n")
    f.write("#include <stdint.h>\n")
    f.write("#include <stdio.h>\n")
    f.write("#include <stdlib.h>\n")
    f.write("#include <string.h>\n")
    f.write("#include <math.h>\n")
    f.write("\n")
    f.write('#include "MMath_types.h"\n\n')

    # Ghidra-specific type aliases
    f.write("/* Ghidra type aliases */\n")
    f.write("typedef unsigned char  undefined;\n")
    f.write("typedef unsigned char  undefined1;\n")
    f.write("typedef unsigned short undefined2;\n")
    f.write("typedef unsigned int   undefined4;\n")
    f.write("typedef unsigned long long undefined8;\n")
    f.write("typedef unsigned char  byte;\n")
    f.write("typedef unsigned short ushort;\n")
    f.write("typedef unsigned int   uint;\n")
    f.write("typedef unsigned long long ulonglong;\n")
    f.write("typedef long long      longlong;\n")
    f.write("typedef int            bool_t;\n")
    f.write("typedef unsigned char  uchar;\n")
    f.write("\n")

    # Forward declarations
    f.write("/* ========== Forward Declarations ========== */\n\n")
    for proto in prototypes:
        f.write(proto + "\n")
    f.write("\n")

    # Named data
    if data_items:
        f.write("/* ========== Named Data ========== */\n\n")
        for item in data_items:
            f.write(item + "\n")
        f.write("\n")

    # Function bodies
    f.write("/* ========== Function Implementations ========== */\n\n")
    for body in function_bodies:
        f.write(body + "\n\n")

print("[+] Decompiled source written to: %s" % src_path)

# Also write a header with just prototypes
hdr_path = os.path.join(output_dir, "MMath_functions.h")
with open(hdr_path, "w") as f:
    f.write("#ifndef MMATH_FUNCTIONS_H\n#define MMATH_FUNCTIONS_H\n\n")
    f.write('#include "MMath_types.h"\n\n')
    for proto in prototypes:
        f.write(proto + "\n")
    f.write("\n#endif /* MMATH_FUNCTIONS_H */\n")

print("[+] Function prototypes written to: %s" % hdr_path)
print("[*] Done!")

decomp.dispose()
