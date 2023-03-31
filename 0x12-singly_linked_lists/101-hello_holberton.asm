section .data
	; defines a null-terminated string named 'hello'
	hello db 'Hello, Holberton', 10, 0

section .text
	; Make the 'main' symbol visible to the linker
	global main
	; Specify that the 'printf' symbol is defined in an external object file
	extern printf

main:
	; Set up a stack frame for 'main' function
	push rbp
	mov rbp, rsp

	; Load the address of the 'hello' string into the 'rdi' register
	mov rdi, hello

	; Set the value of the 'rax' register to 0
	xor rax, rax

	; Call the 'printf' function
	call printf

	; Set the return value of the function to 0
	mov rax, 0

	; Restore the value of the 'rbp' register from the stack
	pop rbp

	; Return from the function
	ret
