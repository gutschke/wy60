bin_PROGRAMS = wy60
wy60_SOURCES = wy60.c wy60.h
man_MANS     = wy60.1
etcdir       = "$(sysconfdir)"
etc_DATA     = wy60.rc
EXTRA_DIST   = wy60.rc wy60.man.in wy60.ps
CPPFLAGS     = -DETCDIR="\"$(sysconfdir)\""
all: wy60.1
wy60.1: wy60.man.in
	$(AWK) '{ gsub(/@SYSCONFDIR@/, "$(sysconfdir)"); print }' <"$(srcdir)/wy60.man.in" >wy60.1
	-man -Tps "./$(srcdir)/wy60.1" >wy60.ps~ 2>/dev/null && mv wy60.ps~ wy60.ps
	rm -f wy60.ps~
