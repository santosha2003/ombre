# Created by: Vasil Dimov <vd@FreeBSD.org>
# $FreeBSD: head/net-p2p/monero-cli/Makefile 469430 2018-05-09 05:37:54Z dinoex $

PORTNAME=	ombre
PORTVERSION=	master
#DISTVERSIONPREFIX=	v
#PORTREVISION=	1
CATEGORIES=	net-p2p finance

MAINTAINER=	vd@FreeBSD.org
COMMENT=	Private, secure, untraceable, decentralised digital currency (CLI)

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	\
		libboost_chrono.so:devel/boost-libs \
		libboost_date_time.so:devel/boost-libs \
		libboost_filesystem.so:devel/boost-libs \
		libboost_program_options.so:devel/boost-libs \
		libboost_regex.so:devel/boost-libs \
		libboost_serialization.so:devel/boost-libs \
		libboost_system.so:devel/boost-libs \
		libboost_thread.so:devel/boost-libs \
		libminiupnpc.so:net/miniupnpc \
		libnorm.so:net/norm \
		libpgm.so:net/openpgm \
		libunbound.so:dns/unbound \
		libunwind.so:devel/libunwind \
		libzmq.so:net/libzmq4
BUILD_DEPENDS=	${LOCALBASE}/include/zmq.hpp:net/cppzmq

USES=		cmake compiler:c++11-lib pkgconfig readline ssl
USE_GITHUB=	yes
GH_ACCOUNT=	ombre-projects
GH_PROJECT=	ombre
CFLAGS+=	-D_WANT_SEMUN
LLD_UNSAFE=	yes

OPTIONS_DEFINE=		DOXYGEN
DOXYGEN_BUILD_DEPENDS=	dot:graphics/graphviz \
			doxygen:devel/doxygen
DOXYGEN_CMAKE_BOOL=	BUILD_DOCUMENTATION

USE_RC_SUBR=	ombred

USERS=		monero
GROUPS=		monero

PLIST_FILES=	\
		bin/ombre-blockchain-export \
		bin/ombre-blockchain-import \
		bin/ombre-wallet-cli \
		bin/ombre-wallet-rpc \
		bin/ombred

.include <bsd.port.mk>
