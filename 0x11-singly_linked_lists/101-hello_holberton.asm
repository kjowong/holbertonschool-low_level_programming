section .text ; section with text
			global  main ; declaring global main function, entry point
	        extern  printf ; delaring function printf

main: ;assembling main function
	        push    rbx	; push to stack

	        mov     rdi, fmt	; move format to the register rdi
	       	mov     rsi, msg ; move message to register rsi
	        mov     rax, 1 ; run syscall 1 to write function
	       	call    printf	 ; call the printf function

			pop rbx	; pop stack

			mov rax, 1 ;Exit to stdout
			ret ; Return
section .data
			msg: 	db "Hello, Holberton", 0 ;delare message end in null terminator
			fmt:	db "%s", 10, 0 ;delcar format, follow by newline(10) and null terminator
