# Use these settings when compiling on a Linux-like system
CFLAGS   = -DHAS_GETPT

# Use these settings when compiling on a BSD-like system
# CFLAGS =

GCC      = gcc

.SUFFIXES: .c .o .man .ps

all: wy60

docs: wy60.ps

clean:
	rm -f *.o *.ps

wy60: wy60.o
	${GCC} -g -lcurses -o $@ wy60.o

wy60.o: wy60.c

wy60.ps: wy60.man

install: all
	@if test `id -u` -ne 0; then echo "Must be root to install wy60"; else            \
	  echo "Installing wy60 terminal emulator";                                       \
	  install -v -D -o root -g root -m 0755 -s wy60     /usr/local/bin/wy60        && \
	  install -v -D -o root -g root -m 0644    wy60.man /usr/local/man/man1/wy60.1 && \
	  install -v -D -o root -g root -m 0644    wy60.rc  /etc/wy60.rc;                 \
	fi

.c.o:
	${GCC} ${CFLAGS} -g -O2 -Wall -c -o $@ $<

.man.ps:
	man -Tps ./$< >$@

