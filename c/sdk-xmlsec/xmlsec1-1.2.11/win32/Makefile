# Makefile for xmlsec, specific for Windows, MSVC and NMAKE.
#
# Take a look at the beginning and modify the variables to suit your 
# environment. Having done that, you can do a
#
# nmake [all]     to build the xmlsec and the accompanying utilities.
# nmake clean     to remove all compiler output files and return to a
#                 clean state.
# nmake rebuild   to rebuild everything from scratch. This basically does
#                 a 'nmake clean' and then a 'nmake all'.
# nmake install   to install the library and its header files.
#
# March 2002, Igor Zlatkovic <igor@stud.fh-frankfurt.de>
#	Created for LibXML and LibXSLT
# April 2002, Aleksey Sanin <aleksey@aleksey.com>
#	Modified for XMLSec Libary
#

AUTOCONF = .\configure.txt

# If you cannot run the configuration script, which would take the burden of
# editing this file from your back, then remove the following line...
!include $(AUTOCONF)
# ...and enable the following lines and adapt them to your environment.
#BASEDIR = ..
#XMLSEC_SRCDIR = $(BASEDIR)\src
#APPS_SRCDIR = $(BASEDIR)\apps
#BINDIR = binaries
#XMLSEC_MAJOR_VERSION = 0 # set this to the right value.
#XMLSEC_MINOR_VERSION = 0 # set this to the right value.
#XMLSEC_MICRO_VERSION = 0 # set this to the right value.
#WITH_XMLSEC_DEBUG = 1
#DEBUG = 0
#WITH_CRYPTO=openssl
#WITH_CRYPTO=openssl
#WITH_DEFAULT_CRYPTO=openssl
#WITH_OPENSSL=1
#WITH_OPENSSL_VERSION=
#WITH_NSS=0
#WITH_MSCRYPTO=0
#WITH_LIBXSLT=1
#STATIC = 0
#WITH_DL = 1
#PREFIX = . # set this to the right value.
#BINPREFIX = $(PREFIX)\bin
#INCPREFIX = $(PREFIX)\include
#LIBPREFIX = $(PREFIX)\lib
#SOPREFIX = $(PREFIX)\lib
#INCLUDE = $(INCLUDE);$(INCPREFIX)
#LIB = $(LIB);$(LIBPREFIX) 

# There should never be a need to modify anything below this line.
# ----------------------------------------------------------------

#
# Names of various input and output components.
#
!if "$(STATIC)" == "1"
APP_NAME 		= xmlseca.exe
!else
APP_NAME 		= xmlsec.exe
!endif

XMLSEC_NAME 		= xmlsec
XMLSEC_BASENAME 	= lib$(XMLSEC_NAME)
XMLSEC_SO 		= $(XMLSEC_BASENAME).dll
XMLSEC_IMP 		= $(XMLSEC_BASENAME).lib
XMLSEC_A 		= $(XMLSEC_BASENAME)_a.lib

XMLSEC_OPENSSL_NAME 	= $(XMLSEC_NAME)-openssl
XMLSEC_OPENSSL_BASENAME = lib$(XMLSEC_OPENSSL_NAME)
XMLSEC_OPENSSL_SO 	= $(XMLSEC_OPENSSL_BASENAME).dll
XMLSEC_OPENSSL_IMP 	= $(XMLSEC_OPENSSL_BASENAME).lib
XMLSEC_OPENSSL_A 	= $(XMLSEC_OPENSSL_BASENAME)_a.lib

XMLSEC_NSS_NAME 	= $(XMLSEC_NAME)-nss
XMLSEC_NSS_BASENAME 	= lib$(XMLSEC_NSS_NAME)
XMLSEC_NSS_SO 		= $(XMLSEC_NSS_BASENAME).dll
XMLSEC_NSS_IMP 		= $(XMLSEC_NSS_BASENAME).lib
XMLSEC_NSS_A 		= $(XMLSEC_NSS_BASENAME)_a.lib

XMLSEC_MSCRYPTO_NAME 	= $(XMLSEC_NAME)-mscrypto
XMLSEC_MSCRYPTO_BASENAME= lib$(XMLSEC_MSCRYPTO_NAME)
XMLSEC_MSCRYPTO_SO 	= $(XMLSEC_MSCRYPTO_BASENAME).dll
XMLSEC_MSCRYPTO_IMP 	= $(XMLSEC_MSCRYPTO_BASENAME).lib
XMLSEC_MSCRYPTO_A 	= $(XMLSEC_MSCRYPTO_BASENAME)_a.lib

#
# Places where intermediate files produced by the compiler go
#
XMLSEC_APPS_INTDIR      = apps.int
XMLSEC_APPS_INTDIR_A    = apps_a.int

XMLSEC_INTDIR           = $(XMLSEC_BASENAME).int
XMLSEC_INTDIR_A         = $(XMLSEC_BASENAME)_a.int

XMLSEC_OPENSSL_INTDIR   = $(XMLSEC_BASENAME)_openssl.int
XMLSEC_OPENSSL_INTDIR_A = $(XMLSEC_BASENAME)_openssl_a.int

XMLSEC_NSS_INTDIR       = $(XMLSEC_BASENAME)_nss.int
XMLSEC_NSS_INTDIR_A     = $(XMLSEC_BASENAME)_nss_a.int

XMLSEC_MSCRYPTO_INTDIR  = $(XMLSEC_BASENAME)_mscrypto.int
XMLSEC_MSCRYPTO_INTDIR_A= $(XMLSEC_BASENAME)_mscrypto_a.int

#
# Source folders
#
XMLSEC_OPENSSL_SRCDIR   = $(XMLSEC_SRCDIR)\openssl
XMLSEC_NSS_SRCDIR   	= $(XMLSEC_SRCDIR)\nss
XMLSEC_MSCRYPTO_SRCDIR  = $(XMLSEC_SRCDIR)\mscrypto


#
# Object files for libraries and apps.
#
XMLSEC_APPS_OBJS = \
	$(XMLSEC_APPS_INTDIR)\crypto.obj\
	$(XMLSEC_APPS_INTDIR)\cmdline.obj\
	$(XMLSEC_APPS_INTDIR)\xmlsec.obj
XMLSEC_APPS_OBJS_A = \
	$(XMLSEC_APPS_INTDIR_A)\crypto.obj\
	$(XMLSEC_APPS_INTDIR_A)\cmdline.obj\
	$(XMLSEC_APPS_INTDIR_A)\xmlsec.obj

XMLSEC_OBJS = \
	$(XMLSEC_INTDIR)\app.obj\
	$(XMLSEC_INTDIR)\base64.obj\
	$(XMLSEC_INTDIR)\bn.obj\
	$(XMLSEC_INTDIR)\buffer.obj \
	$(XMLSEC_INTDIR)\c14n.obj \
	$(XMLSEC_INTDIR)\dl.obj \
	$(XMLSEC_INTDIR)\enveloped.obj \
	$(XMLSEC_INTDIR)\errors.obj \
	$(XMLSEC_INTDIR)\io.obj \
	$(XMLSEC_INTDIR)\keyinfo.obj \
	$(XMLSEC_INTDIR)\keys.obj \
	$(XMLSEC_INTDIR)\keysdata.obj \
	$(XMLSEC_INTDIR)\keysmngr.obj \
	$(XMLSEC_INTDIR)\list.obj \
	$(XMLSEC_INTDIR)\membuf.obj \
	$(XMLSEC_INTDIR)\nodeset.obj \
	$(XMLSEC_INTDIR)\parser.obj \
	$(XMLSEC_INTDIR)\soap.obj \
	$(XMLSEC_INTDIR)\strings.obj \
	$(XMLSEC_INTDIR)\templates.obj \
	$(XMLSEC_INTDIR)\transforms.obj \
	$(XMLSEC_INTDIR)\x509.obj \
	$(XMLSEC_INTDIR)\xkms.obj \
	$(XMLSEC_INTDIR)\xmldsig.obj \
	$(XMLSEC_INTDIR)\xmlenc.obj \
	$(XMLSEC_INTDIR)\xmlsec.obj \
	$(XMLSEC_INTDIR)\xmltree.obj \
	$(XMLSEC_INTDIR)\xpath.obj \
	$(XMLSEC_INTDIR)\xslt.obj 
XMLSEC_OBJS_A = \
	$(XMLSEC_INTDIR_A)\app.obj\
	$(XMLSEC_INTDIR_A)\base64.obj\
	$(XMLSEC_INTDIR_A)\bn.obj\
	$(XMLSEC_INTDIR_A)\buffer.obj \
	$(XMLSEC_INTDIR_A)\c14n.obj \
	$(XMLSEC_INTDIR_A)\dl.obj \
	$(XMLSEC_INTDIR_A)\enveloped.obj \
	$(XMLSEC_INTDIR_A)\errors.obj \
	$(XMLSEC_INTDIR_A)\io.obj \
	$(XMLSEC_INTDIR_A)\keyinfo.obj \
	$(XMLSEC_INTDIR_A)\keys.obj \
	$(XMLSEC_INTDIR_A)\keysdata.obj \
	$(XMLSEC_INTDIR_A)\keysmngr.obj \
	$(XMLSEC_INTDIR_A)\list.obj \
	$(XMLSEC_INTDIR_A)\membuf.obj \
	$(XMLSEC_INTDIR_A)\nodeset.obj \
	$(XMLSEC_INTDIR_A)\parser.obj \
	$(XMLSEC_INTDIR_A)\soap.obj \
	$(XMLSEC_INTDIR_A)\strings.obj \
	$(XMLSEC_INTDIR_A)\templates.obj \
	$(XMLSEC_INTDIR_A)\transforms.obj \
	$(XMLSEC_INTDIR_A)\x509.obj \
	$(XMLSEC_INTDIR_A)\xkms.obj \
	$(XMLSEC_INTDIR_A)\xmldsig.obj \
	$(XMLSEC_INTDIR_A)\xmlenc.obj \
	$(XMLSEC_INTDIR_A)\xmlsec.obj \
	$(XMLSEC_INTDIR_A)\xmltree.obj \
	$(XMLSEC_INTDIR_A)\xpath.obj \
	$(XMLSEC_INTDIR_A)\xslt.obj 

!if "$(WITH_DL)" == "1"
XMLSEC_OBJS 	= $(XMLSEC_OBJS) $(XMLSEC_INTDIR)\xmlsec-ltdl.obj
XMLSEC_OBJS_A 	= $(XMLSEC_OBJS_A) $(XMLSEC_INTDIR_A)\xmlsec-ltdl.obj
!endif 

XMLSEC_OPENSSL_OBJS = \
	$(XMLSEC_OPENSSL_INTDIR)\app.obj\
	$(XMLSEC_OPENSSL_INTDIR)\bn.obj \
	$(XMLSEC_OPENSSL_INTDIR)\ciphers.obj \
	$(XMLSEC_OPENSSL_INTDIR)\crypto.obj \
	$(XMLSEC_OPENSSL_INTDIR)\digests.obj \
	$(XMLSEC_OPENSSL_INTDIR)\evp.obj \
	$(XMLSEC_OPENSSL_INTDIR)\hmac.obj \
	$(XMLSEC_OPENSSL_INTDIR)\kt_rsa.obj \
	$(XMLSEC_OPENSSL_INTDIR)\kw_aes.obj \
	$(XMLSEC_OPENSSL_INTDIR)\kw_des.obj \
	$(XMLSEC_OPENSSL_INTDIR)\signatures.obj \
	$(XMLSEC_OPENSSL_INTDIR)\strings.obj \
	$(XMLSEC_OPENSSL_INTDIR)\symkeys.obj \
	$(XMLSEC_OPENSSL_INTDIR)\x509.obj \
	$(XMLSEC_OPENSSL_INTDIR)\x509vfy.obj 
XMLSEC_OPENSSL_OBJS_A = \
	$(XMLSEC_OPENSSL_INTDIR_A)\app.obj\
	$(XMLSEC_OPENSSL_INTDIR_A)\bn.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\ciphers.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\crypto.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\digests.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\evp.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\hmac.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\kt_rsa.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\kw_aes.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\kw_des.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\signatures.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\strings.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\symkeys.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\x509.obj \
	$(XMLSEC_OPENSSL_INTDIR_A)\x509vfy.obj 

XMLSEC_NSS_OBJS = \
	$(XMLSEC_NSS_INTDIR)\app.obj\
	$(XMLSEC_NSS_INTDIR)\bignum.obj\
	$(XMLSEC_NSS_INTDIR)\ciphers.obj \
	$(XMLSEC_NSS_INTDIR)\crypto.obj \
	$(XMLSEC_NSS_INTDIR)\digests.obj \
	$(XMLSEC_NSS_INTDIR)\hmac.obj \
	$(XMLSEC_NSS_INTDIR)\pkikeys.obj\
	$(XMLSEC_NSS_INTDIR)\signatures.obj\
	$(XMLSEC_NSS_INTDIR)\symkeys.obj \
	$(XMLSEC_NSS_INTDIR)\x509.obj\
	$(XMLSEC_NSS_INTDIR)\x509vfy.obj\
	$(XMLSEC_NSS_INTDIR)\keysstore.obj\
	$(XMLSEC_NSS_INTDIR)\keytrans.obj\
	$(XMLSEC_NSS_INTDIR)\kw_des.obj\
	$(XMLSEC_NSS_INTDIR)\kw_aes.obj\
	$(XMLSEC_NSS_INTDIR)\strings.obj
XMLSEC_NSS_OBJS_A = \
	$(XMLSEC_NSS_INTDIR_A)\app.obj\
	$(XMLSEC_NSS_INTDIR_A)\bignum.obj\
	$(XMLSEC_NSS_INTDIR_A)\ciphers.obj \
	$(XMLSEC_NSS_INTDIR_A)\crypto.obj \
	$(XMLSEC_NSS_INTDIR_A)\digests.obj \
	$(XMLSEC_NSS_INTDIR_A)\hmac.obj \
	$(XMLSEC_NSS_INTDIR_A)\pkikeys.obj\
	$(XMLSEC_NSS_INTDIR_A)\signatures.obj\
	$(XMLSEC_NSS_INTDIR_A)\symkeys.obj \
	$(XMLSEC_NSS_INTDIR_A)\x509.obj\
	$(XMLSEC_NSS_INTDIR_A)\x509vfy.obj\
	$(XMLSEC_NSS_INTDIR_A)\keysstore.obj\
	$(XMLSEC_NSS_INTDIR_A)\kt_rsa.obj\
	$(XMLSEC_NSS_INTDIR_A)\kw_des.obj\
	$(XMLSEC_NSS_INTDIR_A)\kw_aes.obj\
	$(XMLSEC_NSS_INTDIR_A)\strings.obj

XMLSEC_MSCRYPTO_OBJS = \
	$(XMLSEC_MSCRYPTO_INTDIR)\app.obj\
	$(XMLSEC_MSCRYPTO_INTDIR)\crypto.obj \
	$(XMLSEC_MSCRYPTO_INTDIR)\ciphers.obj \
	$(XMLSEC_MSCRYPTO_INTDIR)\digests.obj \
	$(XMLSEC_MSCRYPTO_INTDIR)\symkeys.obj \
	$(XMLSEC_MSCRYPTO_INTDIR)\kt_rsa.obj \
	$(XMLSEC_MSCRYPTO_INTDIR)\strings.obj \
	$(XMLSEC_MSCRYPTO_INTDIR)\signatures.obj \
	$(XMLSEC_MSCRYPTO_INTDIR)\certkeys.obj \
	$(XMLSEC_MSCRYPTO_INTDIR)\keysstore.obj \
	$(XMLSEC_MSCRYPTO_INTDIR)\x509.obj \
	$(XMLSEC_MSCRYPTO_INTDIR)\x509vfy.obj
XMLSEC_MSCRYPTO_OBJS_A = \
	$(XMLSEC_MSCRYPTO_INTDIR_A)\app.obj\
	$(XMLSEC_MSCRYPTO_INTDIR_A)\crypto.obj \
	$(XMLSEC_MSCRYPTO_INTDIR_A)\ciphers.obj \
	$(XMLSEC_MSCRYPTO_INTDIR_A)\digests.obj \
	$(XMLSEC_MSCRYPTO_INTDIR_A)\symkeys.obj \
	$(XMLSEC_MSCRYPTO_INTDIR_A)\kt_rsa.obj \
	$(XMLSEC_MSCRYPTO_INTDIR_A)\strings.obj \
	$(XMLSEC_MSCRYPTO_INTDIR_A)\signatures.obj \
	$(XMLSEC_MSCRYPTO_INTDIR_A)\certkeys.obj \
	$(XMLSEC_MSCRYPTO_INTDIR_A)\keysstore.obj \
	$(XMLSEC_MSCRYPTO_INTDIR_A)\x509.obj \
	$(XMLSEC_MSCRYPTO_INTDIR_A)\x509vfy.obj

#
# The preprocessor and its options.
#
CPP 			= cl.exe /EP
CPPFLAGS 		= /nologo

#
# The compiler and its options.
#
CC 			= cl.exe
CFLAGS 			= /nologo /D "WIN32" /D "_WINDOWS" 
CFLAGS 			= $(CFLAGS) /D "_MBCS" /D "_REENTRANT"  /W1 /MD 
CFLAGS 			= $(CFLAGS) /I$(BASEDIR) /I$(BASEDIR)\include
CFLAGS 			= $(CFLAGS) /I$(INCPREFIX)
CFLAGS 			= $(CFLAGS) /D PACKAGE=\"$(XMLSEC_NAME)\" 
CFLAGS 			= $(CFLAGS) /D "HAVE_STDIO_H" /D "HAVE_STDLIB_H"
CFLAGS 			= $(CFLAGS) /D "HAVE_STRING_H" /D "HAVE_CTYPE_H"
CFLAGS 			= $(CFLAGS) /D "HAVE_MALLOC_H" /D "HAVE_MEMORY_H"

# Optimisation and debug symbols.
!if "$(DEBUG)" == "1"
CFLAGS 			= $(CFLAGS) /D "_DEBUG" /Od /Z7
!else
CFLAGS 			= $(CFLAGS) /D "NDEBUG" /O2 
!endif

# configurable options
!if "$(WITH_LIBXSLT)" == "1"
!else 
CFLAGS 			= $(CFLAGS) /DXMLSEC_NO_XSLT=1
!endif

!if "$(WITH_NT4)" == "1"
CFLAGS 			= $(CFLAGS) /DXMLSEC_MSCRYPTO_NT4=1
!else 
!endif

APP_CFLAGS		= /D "XMLSEC_CRYPTO=\"$(XMLSEC_CRYPTO)\""
!if "$(WITH_DL)" == "1"
CFLAGS 			= $(CFLAGS) /D LTDL_OBJDIR=\"\" /D LTDL_SHLIB_EXT=\".dll\"
APP_CFLAGS		= $(APP_CFLAGS) /D "XMLSEC_CRYPTO_DYNAMIC_LOADING"
!else
CFLAGS 			= $(CFLAGS) /D "XMLSEC_NO_CRYPTO_DYNAMIC_LOADING"
APP_CFLAGS		= $(APP_CFLAGS) $(XMLSEC_CRYPTO_CFLAGS) 
# this disables TEMPLATE tests and helps with missing algorithms (hmac) in mscrypto
APP_CFLAGS		= $(APP_CFLAGS) /D "XMLSEC_NO_TMPL_TEST"
!endif

!if "$(WITH_OPENSSL_VERSION)" == ""
XMLSEC_OPENSSL_CFLAGS   = /D "XMLSEC_CRYPTO_OPENSSL" /D "XMLSEC_CRYPTO=\"openssl\""
!else
XMLSEC_OPENSSL_CFLAGS   = /D "$(WITH_OPENSSL_VERSION)" /D "XMLSEC_CRYPTO_OPENSSL" /D "XMLSEC_CRYPTO=\"openssl\""
!endif
XMLSEC_NSS_CFLAGS   	= /D "XMLSEC_CRYPTO_NSS" /D "XMLSEC_CRYPTO=\"nss\""
XMLSEC_MSCRYPTO_CFLAGS  = /D "XMLSEC_CRYPTO_MSCRYPTO" /D "XMLSEC_CRYPTO=\"mscrypto\""

#
# The linker and its options.
#
LD 			= link.exe
LDFLAGS 		= /nologo 
LDFLAGS 		= $(LDFLAGS) /LIBPATH:$(BINDIR) /LIBPATH:$(LIBPREFIX)
LIBS 			= 

# Optimisation and debug symbols.
!if "$(DEBUG)" == "1"
LDFLAGS 		= $(LDFLAGS) /DEBUG
!else
LDFLAGS 		= $(LDFLAGS) /OPT:NOWIN98
!endif

SOLIBS 			= $(LIBS) libxml2.lib 
ALIBS 			= $(LIBS) libxml2_a.lib 

!if "$(WITH_ICONV)" == "1"
SOLIBS 			= $(SOLIBS) iconv.lib
ALIBS 			= $(ALIBS) iconv_a.lib
!endif

!if "$(WITH_LIBXSLT)" == "1"
SOLIBS 			= $(SOLIBS) libxslt.lib
ALIBS 			= $(ALIBS) libxslt_a.lib
!endif

!if "$(STATIC)" == "1"
APP_LIBS  		= $(ALIBS) $(XMLSEC_CRYPTO_ALIBS)
!else
APP_LIBS  		= $(SOLIBS) $(XMLSEC_CRYPTO_SOLIBS)
!endif

!if "$(WITH_DL)" == "1"
!else
!endif

XMLSEC_OPENSSL_SOLIBS   = libeay32.lib wsock32.lib kernel32.lib user32.lib gdi32.lib
XMLSEC_OPENSSL_ALIBS    = libeay32.lib wsock32.lib kernel32.lib user32.lib gdi32.lib

XMLSEC_NSS_SOLIBS   	= smime3.lib ssl3.lib nss3.lib libnspr4.lib libplds4.lib libplc4.lib kernel32.lib user32.lib gdi32.lib
XMLSEC_NSS_ALIBS    	= smime3.lib ssl3.lib nss3.lib libnspr4_s.lib libplds4_s.lib libplc4_s.lib kernel32.lib user32.lib gdi32.lib

XMLSEC_MSCRYPTO_SOLIBS  = kernel32.lib user32.lib gdi32.lib Crypt32.lib Advapi32.lib
XMLSEC_MSCRYPTO_ALIBS   = kernel32.lib user32.lib gdi32.lib Crypt32.lib Advapi32.lib


# The archiver and its options.
AR = link.exe /lib
ARFLAGS = /nologo


#
# xmlsec-<default-crypto> options
#
!if "$(WITH_DEFAULT_CRYPTO)" == "openssl" 
XMLSEC_CRYPTO          	= "openssl"
XMLSEC_CRYPTO_CFLAGS   	= $(XMLSEC_OPENSSL_CFLAGS)
XMLSEC_CRYPTO_SOLIBS  	= $(XMLSEC_OPENSSL_SOLIBS)
XMLSEC_CRYPTO_ALIBS    	= $(XMLSEC_OPENSSL_ALIBS)
XMLSEC_CRYPTO_SO        = $(XMLSEC_OPENSSL_SO)
XMLSEC_CRYPTO_IMP	= $(XMLSEC_OPENSSL_IMP)
XMLSEC_CRYPTO_A		= $(XMLSEC_OPENSSL_A)
!endif

!if "$(WITH_DEFAULT_CRYPTO)" == "nss"
XMLSEC_CRYPTO          	= "nss"
XMLSEC_CRYPTO_CFLAGS   	= $(XMLSEC_NSS_CFLAGS)
XMLSEC_CRYPTO_SOLIBS   	= $(XMLSEC_NSS_SOLIBS)
XMLSEC_CRYPTO_ALIBS    	= $(XMLSEC_NSS_ALIBS)
XMLSEC_CRYPTO_SO        = $(XMLSEC_NSS_SO)
XMLSEC_CRYPTO_IMP	= $(XMLSEC_NSS_IMP)
XMLSEC_CRYPTO_A		= $(XMLSEC_NSS_A)
!endif

!if "$(WITH_DEFAULT_CRYPTO)" == "mscrypto"
XMLSEC_CRYPTO          	= "mscrypto"
XMLSEC_CRYPTO_CFLAGS   	= $(XMLSEC_MSCRYPTO_CFLAGS)
XMLSEC_CRYPTO_SOLIBS   	= $(XMLSEC_MSCRYPTO_SOLIBS)
XMLSEC_CRYPTO_ALIBS    	= $(XMLSEC_MSCRYPTO_ALIBS)
XMLSEC_CRYPTO_SO        = $(XMLSEC_MSCRYPTO_SO)
XMLSEC_CRYPTO_IMP	= $(XMLSEC_MSCRYPTO_IMP)
XMLSEC_CRYPTO_A		= $(XMLSEC_MSCRYPTO_A)
!endif

#
# Build rules
#

all : xmlsec xmlseca $(WITH_CRYPTO) apps 

xmlsec : $(XMLSEC_APPS_INTDIR) $(BINDIR)\$(XMLSEC_SO) $(WITH_DEFAULT_CRYPTO)

xmlseca :  $(XMLSEC_APPS_INTDIR_A) $(BINDIR)\$(XMLSEC_A) $(WITH_DEFAULT_CRYPTO)

openssl: $(BINDIR)\$(XMLSEC_OPENSSL_SO) $(BINDIR)\$(XMLSEC_OPENSSL_A)

nss: $(BINDIR)\$(XMLSEC_NSS_SO) $(BINDIR)\$(XMLSEC_NSS_A)

mscrypto: $(BINDIR)\$(XMLSEC_MSCRYPTO_SO) $(BINDIR)\$(XMLSEC_MSCRYPTO_A)

apps : $(BINDIR)\$(APP_NAME)

check : check-keys check-dsig check-enc

check-keys : $(BINDIR)\$(APP_NAME)
	cd ..
	if not exist win32\tmp mkdir win32\tmp
	set TMPFOLDER=win32/tmp
	sh ./tests/testKeys.sh default ./tests win32/$(BINDIR)/$(APP_NAME) der
	cd win32

check-dsig : $(BINDIR)\$(APP_NAME)	
	cd ..
	if not exist win32\tmp mkdir win32\tmp
	set TMPFOLDER=win32/tmp
	sh ./tests/testDSig.sh default ./tests win32/$(BINDIR)/$(APP_NAME) der
	cd win32

check-enc : $(BINDIR)\$(APP_NAME)
	cd ..
	if not exist win32\tmp mkdir win32\tmp
	set TMPFOLDER=win32/tmp
	sh ./tests/testEnc.sh default ./tests win32/$(BINDIR)/$(APP_NAME) der
	cd win32

check-xkms : $(BINDIR)\$(APP_NAME)
	cd ..
	if not exist win32\tmp mkdir win32\tmp
	set TMPFOLDER=win32\tmp
	sh ./tests/testXKMS.sh default ./tests win32/$(BINDIR)/$(APP_NAME) der
	cd win32
		
clean :
	if exist $(XMLSEC_INTDIR) rmdir /S /Q $(XMLSEC_INTDIR)
	if exist $(XMLSEC_INTDIR_A) rmdir /S /Q $(XMLSEC_INTDIR_A)
	if exist $(XMLSEC_OPENSSL_INTDIR) rmdir /S /Q $(XMLSEC_OPENSSL_INTDIR)
	if exist $(XMLSEC_OPENSSL_INTDIR_A) rmdir /S /Q $(XMLSEC_OPENSSL_INTDIR_A)
	if exist $(XMLSEC_NSS_INTDIR) rmdir /S /Q $(XMLSEC_NSS_INTDIR)
	if exist $(XMLSEC_NSS_INTDIR_A) rmdir /S /Q $(XMLSEC_NSS_INTDIR_A)
	if exist $(XMLSEC_MSCRYPTO_INTDIR) rmdir /S /Q $(XMLSEC_MSCRYPTO_INTDIR)
	if exist $(XMLSEC_MSCRYPTO_INTDIR_A) rmdir /S /Q $(XMLSEC_MSCRYPTO_INTDIR_A)
	if exist $(XMLSEC_APPS_INTDIR) rmdir /S /Q $(XMLSEC_APPS_INTDIR)
	if exist $(XMLSEC_APPS_INTDIR_A) rmdir /S /Q $(XMLSEC_APPS_INTDIR_A)
	if exist $(BINDIR) rmdir /S /Q $(BINDIR)

rebuild : clean all

install : all
	if not exist $(INCPREFIX)\$(XMLSEC_NAME) mkdir $(INCPREFIX)\$(XMLSEC_NAME)
	if exist $(BINDIR)\$(XMLSEC_OPENSSL_SO) if not exist $(INCPREFIX)\$(XMLSEC_NAME)\openssl mkdir $(INCPREFIX)\$(XMLSEC_NAME)\openssl
	if exist $(BINDIR)\$(XMLSEC_NSS_SO) if not exist $(INCPREFIX)\$(XMLSEC_NAME)\nss mkdir $(INCPREFIX)\$(XMLSEC_NAME)\nss
	if exist $(BINDIR)\$(XMLSEC_MSCRYPTO_SO) if not exist $(INCPREFIX)\$(XMLSEC_NAME)\mscrypto mkdir $(INCPREFIX)\$(XMLSEC_NAME)\mscrypto
	if not exist $(BINPREFIX) mkdir $(BINPREFIX)
	if not exist $(LIBPREFIX) mkdir $(LIBPREFIX)
	copy $(BASEDIR)\include\$(XMLSEC_NAME)\*.h $(INCPREFIX)\$(XMLSEC_NAME)
	if exist $(BINDIR)\$(XMLSEC_OPENSSL_SO) copy $(BASEDIR)\include\$(XMLSEC_NAME)\openssl\*.h $(INCPREFIX)\$(XMLSEC_NAME)\openssl
	if exist $(BINDIR)\$(XMLSEC_NSS_SO) copy $(BASEDIR)\include\$(XMLSEC_NAME)\nss\*.h $(INCPREFIX)\$(XMLSEC_NAME)\nss
	if exist $(BINDIR)\$(XMLSEC_MSCRYPTO_SO) copy $(BASEDIR)\include\$(XMLSEC_NAME)\mscrypto\*.h $(INCPREFIX)\$(XMLSEC_NAME)\mscrypto
	copy $(BINDIR)\$(XMLSEC_SO) $(SOPREFIX)
	copy $(BINDIR)\$(XMLSEC_A) $(LIBPREFIX)
	copy $(BINDIR)\$(XMLSEC_IMP) $(LIBPREFIX)
	if exist $(BINDIR)\$(XMLSEC_OPENSSL_SO) copy $(BINDIR)\$(XMLSEC_OPENSSL_SO) $(SOPREFIX)
	if exist $(BINDIR)\$(XMLSEC_OPENSSL_A) copy $(BINDIR)\$(XMLSEC_OPENSSL_A) $(LIBPREFIX)
	if exist $(BINDIR)\$(XMLSEC_OPENSSL_IMP) copy $(BINDIR)\$(XMLSEC_OPENSSL_IMP) $(LIBPREFIX)
	if exist $(BINDIR)\$(XMLSEC_NSS_SO) copy $(BINDIR)\$(XMLSEC_NSS_SO) $(SOPREFIX)
	if exist $(BINDIR)\$(XMLSEC_NSS_A) copy $(BINDIR)\$(XMLSEC_NSS_A) $(LIBPREFIX)
	if exist $(BINDIR)\$(XMLSEC_NSS_IMP) copy $(BINDIR)\$(XMLSEC_NSS_IMP) $(LIBPREFIX)
	if exist $(BINDIR)\$(XMLSEC_MSCRYPTO_SO) copy $(BINDIR)\$(XMLSEC_MSCRYPTO_SO) $(SOPREFIX)
	if exist $(BINDIR)\$(XMLSEC_MSCRYPTO_A) copy $(BINDIR)\$(XMLSEC_MSCRYPTO_A) $(LIBPREFIX)
	if exist $(BINDIR)\$(XMLSEC_MSCRYPTO_IMP) copy $(BINDIR)\$(XMLSEC_MSCRYPTO_IMP) $(LIBPREFIX)
	copy $(BINDIR)\$(APP_NAME) $(BINPREFIX)

uninstall :
	if exist $(INCPREFIX)\$(XMLSEC_NAME) rmdir /S /Q $(INCPREFIX)\$(XMLSEC_NAME)
	if exist $(SOPREFIX)\$(XMLSEC_SO) del /F /S /Q $(SOPREFIX)\$(XMLSEC_SO)
	if exist $(LIBPREFIX)\$(XMLSEC_A) del /F /S /Q $(LIBPREFIX)\$(XMLSEC_A)
	if exist $(LIBPREFIX)\$(XMLSEC_IMP) del /F /S /Q $(LIBPREFIX)\$(XMLSEC_IMP)
	if exist $(SOPREFIX)\$(XMLSEC_OPENSSL_SO) del /F /S /Q $(SOPREFIX)\$(XMLSEC_OPENSSL_SO)
	if exist $(LIBPREFIX)\$(XMLSEC_OPENSSL_A) del /F /S /Q $(LIBPREFIX)\$(XMLSEC_OPENSSL_A)
	if exist $(LIBPREFIX)\$(XMLSEC_OPENSSL_IMP) del /F /S /Q $(LIBPREFIX)\$(XMLSEC_OPENSSL_IMP)
	if exist $(SOPREFIX)\$(XMLSEC_NSS_SO) del /F /S /Q $(SOPREFIX)\$(XMLSEC_NSS_SO)
	if exist $(LIBPREFIX)\$(XMLSEC_NSS_A) del /F /S /Q $(LIBPREFIX)\$(XMLSEC_NSS_A)
	if exist $(LIBPREFIX)\$(XMLSEC_NSS_IMP) del /F /S /Q $(LIBPREFIX)\$(XMLSEC_NSS_IMP)
	if exist $(SOPREFIX)\$(XMLSEC_MSCRYPTO_SO) del /F /S /Q $(SOPREFIX)\$(XMLSEC_MSCRYPTO_SO)
	if exist $(LIBPREFIX)\$(XMLSEC_MSCRYPTO_A) del /F /S /Q $(LIBPREFIX)\$(XMLSEC_MSCRYPTO_A)
	if exist $(LIBPREFIX)\$(XMLSEC_MSCRYPTO_IMP) del /F /S /Q $(LIBPREFIX)\$(XMLSEC_MSCRYPTO_IMP)
	if exist $(BINPREFIX)\$(APP_NAME) del /F /S /Q $(BINPREFIX)\$(APP_NAME)

# This is a target for me, to make a binary distribution. Not for the public use,
# keep your hands off :-)
BDVERSION = $(XMLSEC_VERSION_MAJOR).$(XMLSEC_VERSION_MINOR).$(XMLSEC_VERSION_SUBMINOR)
BDPREFIX = $(XMLSEC_BASENAME)-$(BDVERSION).win32
bindist : all
	$(MAKE) /nologo PREFIX=$(BDPREFIX) SOPREFIX=$(BDPREFIX)\bin install
	cscript //NoLogo configure.js genreadme $(XMLSEC_BASENAME) $(BDVERSION) $(BDPREFIX)\readme.txt

# Makes the compiler output directory.
$(BINDIR) :
	if not exist $(BINDIR) mkdir $(BINDIR)

# Makes intermediate directories.
$(XMLSEC_APPS_INTDIR) :
	if not exist $(XMLSEC_APPS_INTDIR) mkdir $(XMLSEC_APPS_INTDIR)
$(XMLSEC_APPS_INTDIR_A) :
	if not exist $(XMLSEC_APPS_INTDIR_A) mkdir $(XMLSEC_APPS_INTDIR_A)

$(XMLSEC_INTDIR) :
	if not exist $(XMLSEC_INTDIR) mkdir $(XMLSEC_INTDIR)
$(XMLSEC_INTDIR_A) :
	if not exist $(XMLSEC_INTDIR_A) mkdir $(XMLSEC_INTDIR_A)

$(XMLSEC_OPENSSL_INTDIR) :
	if not exist $(XMLSEC_OPENSSL_INTDIR) mkdir $(XMLSEC_OPENSSL_INTDIR)
$(XMLSEC_OPENSSL_INTDIR_A) :
	if not exist $(XMLSEC_OPENSSL_INTDIR_A) mkdir $(XMLSEC_OPENSSL_INTDIR_A)

$(XMLSEC_NSS_INTDIR) :
	if not exist $(XMLSEC_NSS_INTDIR) mkdir $(XMLSEC_NSS_INTDIR)
$(XMLSEC_NSS_INTDIR_A) :
	if not exist $(XMLSEC_NSS_INTDIR_A) mkdir $(XMLSEC_NSS_INTDIR_A)

$(XMLSEC_MSCRYPTO_INTDIR) :
	if not exist $(XMLSEC_MSCRYPTO_INTDIR) mkdir $(XMLSEC_MSCRYPTO_INTDIR)
$(XMLSEC_MSCRYPTO_INTDIR_A) :
	if not exist $(XMLSEC_MSCRYPTO_INTDIR_A) mkdir $(XMLSEC_MSCRYPTO_INTDIR_A)

# An implicit rule for xmlsec compilation.
{$(APPS_SRCDIR)}.c{$(XMLSEC_APPS_INTDIR)}.obj::
	$(CC) $(CFLAGS) $(APP_CFLAGS) /Fo$(XMLSEC_APPS_INTDIR)\ /c $<

{$(XMLSEC_SRCDIR)}.c{$(XMLSEC_INTDIR)}.obj::
	$(CC) $(CFLAGS) /Fo$(XMLSEC_INTDIR)\ /c $<

{$(XMLSEC_SRCDIR)}.c{$(XMLSEC_OPENSSL_INTDIR)}.obj::
	$(CC) $(CFLAGS) $(XMLSEC_OPENSSL_CFLAGS) /Fo$(XMLSEC_OPENSSL_INTDIR)\ /c $<
{$(XMLSEC_OPENSSL_SRCDIR)}.c{$(XMLSEC_OPENSSL_INTDIR)}.obj::
	$(CC) $(CFLAGS) $(XMLSEC_OPENSSL_CFLAGS) /Fo$(XMLSEC_OPENSSL_INTDIR)\ /c $<

{$(XMLSEC_SRCDIR)}.c{$(XMLSEC_NSS_INTDIR)}.obj::
	$(CC) $(CFLAGS) $(XMLSEC_NSS_CFLAGS) /Fo$(XMLSEC_NSS_INTDIR)\ /c $<
{$(XMLSEC_NSS_SRCDIR)}.c{$(XMLSEC_NSS_INTDIR)}.obj::
	$(CC) $(CFLAGS) $(XMLSEC_NSS_CFLAGS) /Fo$(XMLSEC_NSS_INTDIR)\ /c $<

{$(XMLSEC_SRCDIR)}.c{$(XMLSEC_MSCRYPTO_INTDIR)}.obj::
	$(CC) $(CFLAGS) $(XMLSEC_MSCRYPTO_CFLAGS) /Fo$(XMLSEC_MSCRYPTO_INTDIR)\ /c $<
{$(XMLSEC_MSCRYPTO_SRCDIR)}.c{$(XMLSEC_MSCRYPTO_INTDIR)}.obj::
	$(CC) $(CFLAGS) $(XMLSEC_MSCRYPTO_CFLAGS) /Fo$(XMLSEC_MSCRYPTO_INTDIR)\ /c $<

# An implicit rule for static xmlsec compilation.
{$(APPS_SRCDIR)}.c{$(XMLSEC_APPS_INTDIR_A)}.obj::
	$(CC) /D "LIBXML_STATIC" /D "LIBXSLT_STATIC" /D "XMLSEC_STATIC" \
		$(CFLAGS) $(APP_CFLAGS) /Fo$(XMLSEC_APPS_INTDIR_A)\ /c $<

{$(XMLSEC_SRCDIR)}.c{$(XMLSEC_INTDIR_A)}.obj::
	$(CC) /D "LIBXML_STATIC" /D "LIBXSLT_STATIC" /D "XMLSEC_STATIC" \
		$(CFLAGS) /Fo$(XMLSEC_INTDIR_A)\ /c $<

{$(XMLSEC_SRCDIR)}.c{$(XMLSEC_OPENSSL_INTDIR_A)}.obj::
	$(CC) /D "LIBXML_STATIC" /D "LIBXSLT_STATIC" /D "XMLSEC_STATIC" \
		$(CFLAGS) $(XMLSEC_OPENSSL_CFLAGS) /Fo$(XMLSEC_OPENSSL_INTDIR_A)\ /c $<
{$(XMLSEC_OPENSSL_SRCDIR)}.c{$(XMLSEC_OPENSSL_INTDIR_A)}.obj::
	$(CC) /D "LIBXML_STATIC" /D "LIBXSLT_STATIC" /D "XMLSEC_STATIC" \
		$(CFLAGS)  $(XMLSEC_OPENSSL_CFLAGS) /Fo$(XMLSEC_OPENSSL_INTDIR_A)\ /c $<

{$(XMLSEC_SRCDIR)}.c{$(XMLSEC_NSS_INTDIR_A)}.obj::
	$(CC) /D "LIBXML_STATIC" /D "LIBXSLT_STATIC" /D "XMLSEC_STATIC" \
		$(CFLAGS) $(XMLSEC_NSS_CFLAGS) /Fo$(XMLSEC_NSS_INTDIR_A)\ /c $<
{$(XMLSEC_NSS_SRCDIR)}.c{$(XMLSEC_NSS_INTDIR_A)}.obj::
	$(CC) /D "LIBXML_STATIC" /D "LIBXSLT_STATIC" /D "XMLSEC_STATIC" \
		$(CFLAGS) $(XMLSEC_NSS_CFLAGS) /Fo$(XMLSEC_NSS_INTDIR_A)\ /c $<

{$(XMLSEC_SRCDIR)}.c{$(XMLSEC_MSCRYPTO_INTDIR_A)}.obj::
	$(CC) /D "LIBXML_STATIC" /D "LIBXSLT_STATIC" /D "XMLSEC_STATIC" \
		$(CFLAGS) $(XMLSEC_MSCRYPTO_CFLAGS) /Fo$(XMLSEC_MSCRYPTO_INTDIR_A)\ /c $<
{$(XMLSEC_MSCRYPTO_SRCDIR)}.c{$(XMLSEC_MSCRYPTO_INTDIR_A)}.obj::
	$(CC) /D "LIBXML_STATIC" /D "LIBXSLT_STATIC" /D "XMLSEC_STATIC" \
		$(CFLAGS) $(XMLSEC_MSCRYPTO_CFLAGS) /Fo$(XMLSEC_MSCRYPTO_INTDIR_A)\ /c $<

# Compiles xmlsec source. Uses the implicit rule for commands.
$(XMLSEC_OBJS) : $(XMLSEC_INTDIR)
$(XMLSEC_OBJS_A) : $(XMLSEC_INTDIR_A)

$(XMLSEC_OPENSSL_OBJS) : $(XMLSEC_OPENSSL_INTDIR)
$(XMLSEC_OPENSSL_OBJS_A) : $(XMLSEC_OPENSSL_INTDIR_A)

$(XMLSEC_NSS_OBJS) : $(XMLSEC_NSS_INTDIR)
$(XMLSEC_NSS_OBJS_A) : $(XMLSEC_NSS_INTDIR_A)

$(XMLSEC_MSCRYPTO_OBJS) : $(XMLSEC_MSCRYPTO_INTDIR)
$(XMLSEC_MSCRYPTO_OBJS_A) : $(XMLSEC_MSCRYPTO_INTDIR_A)

# Creates the shared objects and archives.
$(BINDIR)\$(XMLSEC_SO) : $(BINDIR) $(XMLSEC_OBJS)
	$(LD) $(LDFLAGS) /DLL /VERSION:$(XMLSEC_VERSION_MAJOR).$(XMLSEC_VERSION_MINOR) \
		/IMPLIB:$(BINDIR)\$(XMLSEC_IMP) /OUT:$(BINDIR)\$(XMLSEC_SO) \
		$(XMLSEC_OBJS) $(SOLIBS)
$(BINDIR)\$(XMLSEC_A) : $(BINDIR) $(XMLSEC_OBJS_A)
	$(AR) $(ARFLAGS) /OUT:$(BINDIR)\$(XMLSEC_A) $(XMLSEC_OBJS_A)

$(BINDIR)\$(XMLSEC_OPENSSL_SO) : $(BINDIR) $(XMLSEC_OPENSSL_OBJS)
	$(LD) $(LDFLAGS) /DLL /VERSION:$(XMLSEC_VERSION_MAJOR).$(XMLSEC_VERSION_MINOR) \
		/IMPLIB:$(BINDIR)\$(XMLSEC_OPENSSL_IMP) /OUT:$(BINDIR)\$(XMLSEC_OPENSSL_SO) \
		$(XMLSEC_OPENSSL_OBJS) $(XMLSEC_IMP) $(SOLIBS) $(XMLSEC_OPENSSL_SOLIBS)
$(BINDIR)\$(XMLSEC_OPENSSL_A) : $(BINDIR) $(XMLSEC_OPENSSL_OBJS_A)
	$(AR) $(ARFLAGS) /OUT:$(BINDIR)\$(XMLSEC_OPENSSL_A) $(XMLSEC_OPENSSL_OBJS_A)

$(BINDIR)\$(XMLSEC_NSS_SO) : $(BINDIR) $(XMLSEC_NSS_OBJS)
	$(LD) $(LDFLAGS) /DLL /VERSION:$(XMLSEC_VERSION_MAJOR).$(XMLSEC_VERSION_MINOR) \
		/IMPLIB:$(BINDIR)\$(XMLSEC_NSS_IMP) /OUT:$(BINDIR)\$(XMLSEC_NSS_SO) \
		$(XMLSEC_NSS_OBJS) $(XMLSEC_IMP) $(SOLIBS) $(XMLSEC_NSS_SOLIBS)
$(BINDIR)\$(XMLSEC_NSS_A) : $(BINDIR) $(XMLSEC_NSS_OBJS_A)
	$(AR) $(ARFLAGS) /OUT:$(BINDIR)\$(XMLSEC_NSS_A) $(XMLSEC_NSS_OBJS_A)

$(BINDIR)\$(XMLSEC_MSCRYPTO_SO) : $(BINDIR) $(XMLSEC_MSCRYPTO_OBJS)
	$(LD) $(LDFLAGS) /DLL /VERSION:$(XMLSEC_VERSION_MAJOR).$(XMLSEC_VERSION_MINOR) \
		/IMPLIB:$(BINDIR)\$(XMLSEC_MSCRYPTO_IMP) /OUT:$(BINDIR)\$(XMLSEC_MSCRYPTO_SO) \
		$(XMLSEC_MSCRYPTO_OBJS) $(XMLSEC_IMP) $(SOLIBS) $(XMLSEC_MSCRYPTO_SOLIBS)
$(BINDIR)\$(XMLSEC_MSCRYPTO_A) : $(BINDIR) $(XMLSEC_MSCRYPTO_OBJS_A)
	$(AR) $(ARFLAGS) /OUT:$(BINDIR)\$(XMLSEC_MSCRYPTO_A) $(XMLSEC_MSCRYPTO_OBJS_A)

# An implicit rule for xmlsec command line tool
$(BINDIR)\xmlseca.exe: $(BINDIR) $(XMLSEC_APPS_OBJS_A)
	$(LD) $(LDFLAGS) /OUT:$@ $(XMLSEC_A) $(XMLSEC_CRYPTO_A) $(APP_LIBS) $(XMLSEC_APPS_OBJS_A)
$(BINDIR)\xmlsec.exe: $(BINDIR) $(XMLSEC_APPS_OBJS)
	$(LD) $(LDFLAGS) /OUT:$@ $(XMLSEC_IMP) $(XMLSEC_CRYPTO_IMP) $(APP_LIBS) $(XMLSEC_APPS_OBJS)

# Builds xmlsec and friends. Uses the implicit rule for commands.
$(BINDIR)\$(APP_NAME) : $(BINDIR) xmlsec xmlseca

# Source dependences should be autogenerated somehow here, but how to
# do it? I have no clue.

