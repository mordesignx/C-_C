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
	${OBJECTDIR}/ptr1.o \
	${OBJECTDIR}/ptr2referencia.o \
	${OBJECTDIR}/ptr2valor.o \
	${OBJECTDIR}/ptr3_forma1_ptrnoconst-datonoconst.o \
	${OBJECTDIR}/ptr3_forma2_1_ptrnoconst-datoconst.o \
	${OBJECTDIR}/ptr3_forma2_ptrnoconst-datoconst.o \
	${OBJECTDIR}/ptr3_forma3_ptrconst-datonoconst.o \
	${OBJECTDIR}/ptr3_forma4_ptrconst-datoconst.o \
	${OBJECTDIR}/ptr4.o \
	${OBJECTDIR}/ptr5_sizeof1.o \
	${OBJECTDIR}/ptr5_sizeof2.o \
	${OBJECTDIR}/ptr6_dezplazamiento.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/almacen_ptr

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/almacen_ptr: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/almacen_ptr ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/ptr1.o: ptr1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr1.o ptr1.c

${OBJECTDIR}/ptr2referencia.o: ptr2referencia.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr2referencia.o ptr2referencia.c

${OBJECTDIR}/ptr2valor.o: ptr2valor.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr2valor.o ptr2valor.c

${OBJECTDIR}/ptr3_forma1_ptrnoconst-datonoconst.o: ptr3_forma1_ptrnoconst-datonoconst.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr3_forma1_ptrnoconst-datonoconst.o ptr3_forma1_ptrnoconst-datonoconst.c

${OBJECTDIR}/ptr3_forma2_1_ptrnoconst-datoconst.o: ptr3_forma2_1_ptrnoconst-datoconst.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr3_forma2_1_ptrnoconst-datoconst.o ptr3_forma2_1_ptrnoconst-datoconst.c

${OBJECTDIR}/ptr3_forma2_ptrnoconst-datoconst.o: ptr3_forma2_ptrnoconst-datoconst.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr3_forma2_ptrnoconst-datoconst.o ptr3_forma2_ptrnoconst-datoconst.c

${OBJECTDIR}/ptr3_forma3_ptrconst-datonoconst.o: ptr3_forma3_ptrconst-datonoconst.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr3_forma3_ptrconst-datonoconst.o ptr3_forma3_ptrconst-datonoconst.c

${OBJECTDIR}/ptr3_forma4_ptrconst-datoconst.o: ptr3_forma4_ptrconst-datoconst.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr3_forma4_ptrconst-datoconst.o ptr3_forma4_ptrconst-datoconst.c

${OBJECTDIR}/ptr4.o: ptr4.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr4.o ptr4.c

${OBJECTDIR}/ptr5_sizeof1.o: ptr5_sizeof1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr5_sizeof1.o ptr5_sizeof1.c

${OBJECTDIR}/ptr5_sizeof2.o: ptr5_sizeof2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr5_sizeof2.o ptr5_sizeof2.c

${OBJECTDIR}/ptr6_dezplazamiento.o: ptr6_dezplazamiento.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr6_dezplazamiento.o ptr6_dezplazamiento.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/almacen_ptr

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
