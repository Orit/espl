section	.text
	global ahalan
	extern puts
ahalan:					;void ahalan()
	push ebp
	mov ebp, esp
	push msg
	call puts
	add esp,4
	;mov	eax,4	;system call number (sys_write)
	int	0x80	;call kernel
	pop ebp
	ret

section	.data

msg	db	'ahalan!',0xa,0	;our dear string
len equ $ - msg

write:
    ret