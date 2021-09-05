	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #80                     ; =80
	stp	x29, x30, [sp, #64]             ; 16-byte Folded Spill
	add	x29, sp, #64                    ; =64
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	mov	x8, sp
	sub	x9, x29, #4                     ; =4
	str	x9, [x8]
	sub	x9, x29, #8                     ; =8
	str	x9, [x8, #8]
	sub	x9, x29, #12                    ; =12
	str	x9, [x8, #16]
	bl	_scanf
	ldur	s0, [x29, #-4]
	ldur	s1, [x29, #-8]
	fadd	s0, s0, s1
	ldur	s1, [x29, #-12]
	fadd	s0, s0, s1
	fcvt	d2, s0
	fmov	d3, #2.00000000
	fdiv	d2, d2, d3
	fcvt	s0, d2
	stur	s0, [x29, #-16]
	ldur	s0, [x29, #-16]
	ldur	s1, [x29, #-16]
	ldur	s4, [x29, #-4]
	fsub	s1, s1, s4
	fmul	s0, s0, s1
	ldur	s1, [x29, #-16]
	ldur	s4, [x29, #-8]
	fsub	s1, s1, s4
	fmul	s0, s0, s1
	ldur	s1, [x29, #-16]
	ldur	s4, [x29, #-12]
	fsub	s1, s1, s4
	fmul	s0, s0, s1
	fcvt	d2, s0
	fsqrt	d2, d2
	fcvt	s0, d2
	stur	s0, [x29, #-20]
	ldur	s0, [x29, #-4]
	fcvt	d2, s0
	ldur	s0, [x29, #-8]
	fcvt	d3, s0
	ldur	s0, [x29, #-12]
	fcvt	d5, s0
	ldur	s0, [x29, #-16]
	fcvt	d6, s0
	ldur	s0, [x29, #-20]
	fcvt	d7, s0
	adrp	x8, l_.str.1@PAGE
	add	x8, x8, l_.str.1@PAGEOFF
	mov	x0, x8
	mov	x8, sp
	str	d2, [x8]
	str	d3, [x8, #8]
	str	d5, [x8, #16]
	str	d6, [x8, #24]
	str	d7, [x8, #32]
	bl	_printf
	mov	w10, #0
	mov	x0, x10
	ldp	x29, x30, [sp, #64]             ; 16-byte Folded Reload
	add	sp, sp, #80                     ; =80
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%f%f%f"

l_.str.1:                               ; @.str.1
	.asciz	"a=%7.2f,b=%7.2f,c=%7.2f,s=%7.2f,area=%7.2f"

.subsections_via_symbols
