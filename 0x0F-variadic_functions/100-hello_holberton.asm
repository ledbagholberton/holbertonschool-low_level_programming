section .data
str:	 db "Hello, Holberton", 0xA, 0

	section .text
	global main
main:
	  MOV RAX, 1
	  MOV RDI, 1
	  MOV RSI, str
	  MOV RDX, 17
	  syscall

	  MOV RAX, 60
	  MOV RDI, 0
	  syscall
