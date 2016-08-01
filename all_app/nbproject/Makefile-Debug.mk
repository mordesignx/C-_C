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
	${OBJECTDIR}/cap3-1.o \
	${OBJECTDIR}/caso1.o \
	${OBJECTDIR}/caso2.o \
	${OBJECTDIR}/caso3.o \
	${OBJECTDIR}/caso4.o \
	${OBJECTDIR}/caso6.o \
	${OBJECTDIR}/cuar1.o \
	${OBJECTDIR}/funcmac1.o \
	${OBJECTDIR}/funcmac2.o \
	${OBJECTDIR}/funcmac3.o \
	${OBJECTDIR}/funcmac4.o \
	${OBJECTDIR}/funcmac5.o \
	${OBJECTDIR}/funcmac6.o \
	${OBJECTDIR}/funcmac7.o \
	${OBJECTDIR}/funcmac8.o \
	${OBJECTDIR}/funcmac8_1.o \
	${OBJECTDIR}/hello.o \
	${OBJECTDIR}/i1.o \
	${OBJECTDIR}/ibucles.o \
	${OBJECTDIR}/ibucles2.o \
	${OBJECTDIR}/ibucles3.o \
	${OBJECTDIR}/ibucles4.o \
	${OBJECTDIR}/ibucles5.o \
	${OBJECTDIR}/ipracbu1.o \
	${OBJECTDIR}/ipracbu2.o \
	${OBJECTDIR}/ipracbuc3.o \
	${OBJECTDIR}/ipracbuc4.o \
	${OBJECTDIR}/pract1.o \
	${OBJECTDIR}/pract2.o \
	${OBJECTDIR}/quin1.o \
	${OBJECTDIR}/suma2.o \
	${OBJECTDIR}/tercaso1.o \
	${OBJECTDIR}/unocuatro.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/all_app

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/all_app: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/all_app ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/cap3-1.o: cap3-1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cap3-1.o cap3-1.c

${OBJECTDIR}/caso1.o: caso1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/caso1.o caso1.c

${OBJECTDIR}/caso2.o: caso2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/caso2.o caso2.c

${OBJECTDIR}/caso3.o: caso3.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/caso3.o caso3.c

${OBJECTDIR}/caso4.o: caso4.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/caso4.o caso4.c

${OBJECTDIR}/caso6.o: caso6.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/caso6.o caso6.c

${OBJECTDIR}/cuar1.o: cuar1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cuar1.o cuar1.c

${OBJECTDIR}/funcmac1.o: funcmac1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcmac1.o funcmac1.c

${OBJECTDIR}/funcmac2.o: funcmac2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcmac2.o funcmac2.c

${OBJECTDIR}/funcmac3.o: funcmac3.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcmac3.o funcmac3.c

${OBJECTDIR}/funcmac4.o: funcmac4.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcmac4.o funcmac4.c

${OBJECTDIR}/funcmac5.o: funcmac5.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcmac5.o funcmac5.c

${OBJECTDIR}/funcmac6.o: funcmac6.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcmac6.o funcmac6.c

${OBJECTDIR}/funcmac7.o: funcmac7.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcmac7.o funcmac7.c

${OBJECTDIR}/funcmac8.o: funcmac8.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcmac8.o funcmac8.c

${OBJECTDIR}/funcmac8_1.o: funcmac8_1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcmac8_1.o funcmac8_1.c

${OBJECTDIR}/hello.o: hello.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/hello.o hello.c

${OBJECTDIR}/i1.o: i1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/i1.o i1.c

${OBJECTDIR}/ibucles.o: ibucles.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ibucles.o ibucles.c

${OBJECTDIR}/ibucles2.o: ibucles2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ibucles2.o ibucles2.c

${OBJECTDIR}/ibucles3.o: ibucles3.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ibucles3.o ibucles3.c

${OBJECTDIR}/ibucles4.o: ibucles4.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ibucles4.o ibucles4.c

${OBJECTDIR}/ibucles5.o: ibucles5.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ibucles5.o ibucles5.c

${OBJECTDIR}/ipracbu1.o: ipracbu1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ipracbu1.o ipracbu1.c

${OBJECTDIR}/ipracbu2.o: ipracbu2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ipracbu2.o ipracbu2.c

${OBJECTDIR}/ipracbuc3.o: ipracbuc3.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ipracbuc3.o ipracbuc3.c

${OBJECTDIR}/ipracbuc4.o: ipracbuc4.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ipracbuc4.o ipracbuc4.c

${OBJECTDIR}/pract1.o: pract1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pract1.o pract1.c

${OBJECTDIR}/pract2.o: pract2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pract2.o pract2.c

${OBJECTDIR}/quin1.o: quin1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/quin1.o quin1.c

${OBJECTDIR}/suma2.o: suma2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/suma2.o suma2.c

${OBJECTDIR}/tercaso1.o: tercaso1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tercaso1.o tercaso1.c

${OBJECTDIR}/unocuatro.o: unocuatro.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/unocuatro.o unocuatro.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/all_app

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
