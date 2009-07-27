/*
 * Copyright (C) 2001, 2002 Markus Gutschke <markus+wy60@wy60.gutschke.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __WY60_H__
#define __WY60_H__

#include "config.h"

#if HAVE_CURSES_H
#include <curses.h>
#else
#if HAVE_NCURSES_H
#include <ncurses.h>
#endif
#endif

#if HAVE_ERRNO_H
#include <errno.h>
#endif

#if HAVE_FCNTL_H
#include <fcntl.h>
#endif

#if HAVE_GRP_H
#include <grp.h>
#endif

#if HAVE_NETINET_IN_H
#include <netinet/in.h>
#endif

#if HAVE_PTY_H
#include <pty.h>
#endif

#if HAVE_SETJMP_H
#include <setjmp.h>
#endif

#if HAVE_SIGNAL_H
#include <signal.h>
#endif

#if HAVE_STDARG_H
#include <stdarg.h>
#endif

#if HAVE_STDIO_H
#include <stdio.h>
#endif

#if HAVE_STDLIB_H
#include <stdlib.h>
#endif

#if HAVE_STRING_H
#include <string.h>
#else
#if HAVE_STRINGS_H
#include <strings.h>
#endif
#endif

#if HAVE_STROPTS_H
#include <stropts.h>
#endif

#if HAVE_SYS_FILIO_H
#include <sys/filio.h>
#endif

#if HAVE_SYS_IOCTL_H
#include <sys/ioctl.h>
#endif

#if HAVE_SYS_POLL_H
#include <sys/poll.h>
#endif

#if HAVE_SYS_SELECT_H
#include <sys/select.h>
#endif

#if HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif

#if TIME_WITH_SYS_TIME
#include <sys/time.h>
#include <time.h>
#else
#if HAVE_SYS_TIME_H
#include <sys/time.h>
#else
#include <time.h>
#endif
#endif

#if HAVE_SYS_TTYDEFAULTS_H
#include <sys/ttydefaults.h>
#endif

#if HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif

#if HAVE_SYSLOG_H
#include <syslog.h>
#endif

#if HAVE_TERM_H
#include <term.h>
#else
#if HAVE_NCURSES_TERM_H
#include <ncurses/term.h>
#endif
#endif

#if HAVE_TERMIOS_H
#include <termios.h>
#endif

#if HAVE_SYS_WAIT_H
#include <sys/wait.h>
#endif

#if HAVE_UNISTD_H
#include <unistd.h>
#endif

#ifndef WEXITSTATUS
#define WEXITSTATUS(stat_val) ((unsigned)(stat_val) >> 8)
#endif
#ifndef WIFEXITED
#define WIFEXITED(stat_val) (((stat_val) & 255) == 0)
#endif

#ifndef TTYDEF_IFLAG
#define TTYDEF_IFLAG (BRKINT | ISTRIP | ICRNL | IMAXBEL | IXON | IXANY)
#endif

#ifndef TTYDEF_OFLAG
#define TTYDEF_OFLAG (OPOST | ONLCR | XTABS)
#endif

#ifndef TTYDEF_LFLAG
#define TTYDEF_LFLAG (ECHO | ICANON | ISIG | IEXTEN | ECHOE | ECHOKE | ECHOCTL)
#endif

#ifndef TTYDEF_CFLAG
#define TTYDEF_CFLAG (CREAD | CS7 | PARENB | HUPCL)
#endif

#ifndef TTYDEF_SPEED
#define TTYDEF_SPEED (B9600)
#endif

#endif
