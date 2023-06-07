global	main
extern 	printf

section	.text
main:
	mov	edi,	format
	xor	eax,	eax
	call	printf
	mov	eax, 0
	ret

section	.data
	format db 'Hello, Holberton', 0xa, 0
