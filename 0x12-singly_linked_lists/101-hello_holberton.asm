; a 64-bit program written in assembly language
; that prints "Hello, Holberton"
; followed by a new line.

extern printf

SECTION .data
fmt:	db "Hello, Holberton", 10, 0

SECTION .text

global main
main:
	push rbp

	mov rdi,fmt
	mov rax,0
	call printf

pop rbp

mov rax,0
ret
