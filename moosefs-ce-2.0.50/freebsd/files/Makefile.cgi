# Created by: Jakub Kruszona-Zawadzki <acid@moosefs.com> ; Based on port created by: Chifeng Qu <chifeng@gmail.com>
# $FreeBSD$

PORTNAME=	moosefs-ce
#PORTVERSION=	# set in 'include'
#PORTREVISION=	# set in 'include'
CATEGORIES=	sysutils
PKGNAMESUFFIX=	-cgi

.include "bsd.port.moosefs.mk"

COMMENT=	Cgi moosefs interface

RUN_DEPENDS=	moosefs-common>0:${PORTSDIR}/sysutils/moosefs-common

USES=           python:2.5+

CONFIGURE_ARGS+=	--disable-generalmans \
			--disable-mfsmaster \
			--disable-mfsmetalogger \
			--disable-mfscgiserv \
			--enable-mfscgi \
			--disable-mfscli \
			--disable-mfsnetdump \
			--disable-mfssupervisor \
			--disable-mfschunkserver \
			--disable-mfsmount

.include <bsd.port.mk>
