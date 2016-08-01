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
	${OBJECTDIR}/BusquedaBinaria.o \
	${OBJECTDIR}/aliasreferencia.o \
	${OBJECTDIR}/cuarto.o \
	${OBJECTDIR}/desplazamiento.o \
	${OBJECTDIR}/elprimero.o \
	${OBJECTDIR}/lectura_escritura_ficheros.o \
	${OBJECTDIR}/lectura_escritura_ficheros2.o \
	${OBJECTDIR}/lectura_escritura_ficheros3.o \
	${OBJECTDIR}/lectura_escritura_ficheros4.o \
	${OBJECTDIR}/primero.o \
	${OBJECTDIR}/primero2.o \
	${OBJECTDIR}/segundo.o \
	${OBJECTDIR}/tercero.o \
	${OBJECTDIR}/valoryreferencia.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/valoryreferenciac__

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/valoryreferenciac__: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/valoryreferenciac__ ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/BusquedaBinaria.o: BusquedaBinaria.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/BusquedaBinaria.o BusquedaBinaria.cpp

${OBJECTDIR}/aliasreferencia.o: aliasreferencia.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/aliasreferencia.o aliasreferencia.cpp

${OBJECTDIR}/cuarto.o: cuarto.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cuarto.o cuarto.cpp

${OBJECTDIR}/desplazamiento.o: desplazamiento.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/desplazamiento.o desplazamiento.cpp

${OBJECTDIR}/elprimero.o: elprimero.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/elprimero.o elprimero.cpp

${OBJECTDIR}/lectura_escritura_ficheros.o: lectura_escritura_ficheros.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lectura_escritura_ficheros.o lectura_escritura_ficheros.cpp

${OBJECTDIR}/lectura_escritura_ficheros2.o: lectura_escritura_ficheros2.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lectura_escritura_ficheros2.o lectura_escritura_ficheros2.cpp

${OBJECTDIR}/lectura_escritura_ficheros3.o: lectura_escritura_ficheros3.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lectura_escritura_ficheros3.o lectura_escritura_ficheros3.cpp

${OBJECTDIR}/lectura_escritura_ficheros4.o: lectura_escritura_ficheros4.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lectura_escritura_ficheros4.o lectura_escritura_ficheros4.cpp

${OBJECTDIR}/primero.o: primero.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/primero.o primero.cpp

${OBJECTDIR}/primero2.o: primero2.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/primero2.o primero2.cpp

${OBJECTDIR}/segundo.o: segundo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/segundo.o segundo.cpp

${OBJECTDIR}/tercero.o: tercero.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tercero.o tercero.cpp

${OBJECTDIR}/valoryreferencia.o: valoryreferencia.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/valoryreferencia.o valoryreferencia.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/valoryreferenciac__

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
