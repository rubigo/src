# $OpenBSD: Makefile,v 1.3 2017/07/09 15:28:34 espie Exp $

.include <bsd.own.mk>

LLVM_SRCS=	${.CURDIR}/../../../../../llvm

HDRS=	X86GenAsmMatcher.inc X86GenAsmWriter.inc X86GenAsmWriter1.inc \
	X86GenCallingConv.inc X86GenDAGISel.inc X86GenDisassemblerTables.inc \
	X86GenFastISel.inc X86GenInstrInfo.inc X86GenRegisterInfo.inc \
	X86GenSubtargetInfo.inc

all: ${HDRS}

install:
	@# Nothing here so far ...

clean cleandir:
	rm -f ${HDRS}

X86GenRegisterInfo.inc: ${LLVM_SRCS}/lib/Target/X86/X86.td
	${.OBJDIR}/../../../llvm-tblgen/llvm-tblgen -gen-register-info \
		-I${LLVM_SRCS}/include -I${LLVM_SRCS}/lib/Target/X86 \
		-o ${.TARGET} ${.ALLSRC}

X86GenDisassemblerTables.inc: ${LLVM_SRCS}/lib/Target/X86/X86.td
	${.OBJDIR}/../../../llvm-tblgen/llvm-tblgen -gen-disassembler \
		-I${LLVM_SRCS}/include -I${LLVM_SRCS}/lib/Target/X86 \
		-o ${.TARGET} ${.ALLSRC}

X86GenInstrInfo.inc: ${LLVM_SRCS}/lib/Target/X86/X86.td
	${.OBJDIR}/../../../llvm-tblgen/llvm-tblgen -gen-instr-info \
		-I${LLVM_SRCS}/include -I${LLVM_SRCS}/lib/Target/X86 \
		-o ${.TARGET} ${.ALLSRC}

X86GenAsmWriter.inc: ${LLVM_SRCS}/lib/Target/X86/X86.td
	${.OBJDIR}/../../../llvm-tblgen/llvm-tblgen -gen-asm-writer \
		-I${LLVM_SRCS}/include -I${LLVM_SRCS}/lib/Target/X86 \
		-o ${.TARGET} ${.ALLSRC}

X86GenAsmWriter1.inc: ${LLVM_SRCS}/lib/Target/X86/X86.td
	${.OBJDIR}/../../../llvm-tblgen/llvm-tblgen -gen-asm-writer -asmwriternum=1 \
		-I${LLVM_SRCS}/include -I${LLVM_SRCS}/lib/Target/X86 \
		-o ${.TARGET} ${.ALLSRC}

X86GenAsmMatcher.inc: ${LLVM_SRCS}/lib/Target/X86/X86.td
	${.OBJDIR}/../../../llvm-tblgen/llvm-tblgen -gen-asm-matcher \
		-I${LLVM_SRCS}/include -I${LLVM_SRCS}/lib/Target/X86 \
		-o ${.TARGET} ${.ALLSRC}

X86GenDAGISel.inc: ${LLVM_SRCS}/lib/Target/X86/X86.td
	${.OBJDIR}/../../../llvm-tblgen/llvm-tblgen -gen-dag-isel \
		-I${LLVM_SRCS}/include -I${LLVM_SRCS}/lib/Target/X86 \
		-o ${.TARGET} ${.ALLSRC}

X86GenFastISel.inc: ${LLVM_SRCS}/lib/Target/X86/X86.td
	${.OBJDIR}/../../../llvm-tblgen/llvm-tblgen -gen-fast-isel \
		-I${LLVM_SRCS}/include -I${LLVM_SRCS}/lib/Target/X86 \
		-o ${.TARGET} ${.ALLSRC}

X86GenCallingConv.inc: ${LLVM_SRCS}/lib/Target/X86/X86.td
	${.OBJDIR}/../../../llvm-tblgen/llvm-tblgen -gen-callingconv \
		-I${LLVM_SRCS}/include -I${LLVM_SRCS}/lib/Target/X86 \
		-o ${.TARGET} ${.ALLSRC}

X86GenSubtargetInfo.inc: ${LLVM_SRCS}/lib/Target/X86/X86.td
	${.OBJDIR}/../../../llvm-tblgen/llvm-tblgen -gen-subtarget \
		-I${LLVM_SRCS}/include -I${LLVM_SRCS}/lib/Target/X86 \
		-o ${.TARGET} ${.ALLSRC}

.include <bsd.obj.mk>
