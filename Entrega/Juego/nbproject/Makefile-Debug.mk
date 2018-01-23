#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Estado.o \
	${OBJECTDIR}/Estado1.o \
	${OBJECTDIR}/ME.o \
	${OBJECTDIR}/bala.o \
	${OBJECTDIR}/enemigo.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/nodo.o


# C Compiler Flags
CFLAGS=-m64

# CC Compiler Flags
CCFLAGS=-m64
CXXFLAGS=-m64

# Fortran Compiler Flags
FFLAGS=-m64

# Assembler Flags
ASFLAGS=--64

# Link Libraries and Options
LDLIBSOPTIONS=-L../../SFML-2.4.2/Build/lib -lsfml-system-d ../../SFML-2.4.2/Build/lib/libsfml-system-d.so -lsfml-graphics-d ../../SFML-2.4.2/Build/lib/libsfml-graphics-d.so -lsfml-window-d ../../SFML-2.4.2/Build/lib/libsfml-window-d.so

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ravenv1
	${CP} ../../SFML-2.4.2/Build/lib/libsfml-system-d.so ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${CP} ../../SFML-2.4.2/Build/lib/libsfml-graphics-d.so ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${CP} ../../SFML-2.4.2/Build/lib/libsfml-window-d.so ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ravenv1: ../../SFML-2.4.2/Build/lib/libsfml-system-d.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ravenv1: ../../SFML-2.4.2/Build/lib/libsfml-graphics-d.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ravenv1: ../../SFML-2.4.2/Build/lib/libsfml-window-d.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ravenv1: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ravenv1 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Estado.o: Estado.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../SFML-2.4.2/Build/src -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estado.o Estado.cpp

${OBJECTDIR}/Estado1.o: Estado1.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../SFML-2.4.2/Build/src -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estado1.o Estado1.cpp

${OBJECTDIR}/ME.o: ME.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../SFML-2.4.2/Build/src -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ME.o ME.cpp

${OBJECTDIR}/bala.o: bala.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../SFML-2.4.2/Build/src -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/bala.o bala.cpp

${OBJECTDIR}/enemigo.o: enemigo.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../SFML-2.4.2/Build/src -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/enemigo.o enemigo.cpp

${OBJECTDIR}/main.o: main.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../SFML-2.4.2/Build/src -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/nodo.o: nodo.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../SFML-2.4.2/Build/src -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/nodo.o nodo.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} -r ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libsfml-system-d.so ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libsfml-graphics-d.so ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libsfml-window-d.so
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ravenv1

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
