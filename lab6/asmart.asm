 section .text
 	global _start
	extern whileLoop
	extern check
	extern puts

 _start:
  	mov ebx,-1	
 	mov ecx,0
	mov edx,4		   ; counter of the word in the argv array 
	

Lp1:
        cmp ebx,6	     	
	jge Done
	inc ebx
	jmp f2
 		
 				    ; esp=argc esp+4= argv
 				    
 f2:	
	cmp ecx,[esp]
 	jge Lp1
	add edx,4
	push ebx	
	push DWORD[esp+edx]
 	call whileLoop
        add esp,8
 	inc ecx
 	jmp f2

 Done:	
	mov     ebx,eax
	mov	eax,1
	int 0x80
