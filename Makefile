# MMath Decompilation Project
# Compiler: MinGW (i686-w64-mingw32-gcc) for 32-bit PE target
#
# Usage:
#   make          - build all object files
#   make clean    - remove build artifacts

CC      = gcc
CFLAGS  = -O0 -std=gnu99 -DWIN32 -D_WIN32 -mwindows -Isrc \
          -fpermissive -w -pipe
LDFLAGS = -mwindows -lcomdlg32 -lgdi32 -luser32 -lkernel32 -lwinmm

BUILDDIR = build
SRCDIR   = src

SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(SOURCES))

.PHONY: all clean

all: $(OBJECTS)
	@echo "All object files built successfully."
	@echo "$(words $(OBJECTS)) files compiled."

$(BUILDDIR)/%.o: $(SRCDIR)/%.c $(SRCDIR)/ghidra_types.h $(SRCDIR)/ghidra_funcs.h | $(BUILDDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

clean:
	rm -rf $(BUILDDIR)
