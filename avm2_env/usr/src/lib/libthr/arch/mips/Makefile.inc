# $FreeBSD: src/lib/libthr/arch/mips/Makefile.inc,v 1.1.2.1.6.1 2010/12/21 17:09:25 kensmith Exp $

.PATH: ${.CURDIR}/arch/${MACHINE_ARCH}/${MACHINE_ARCH}

SRCS+=	pthread_md.c