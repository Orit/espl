section	.text
	global whileLoop
	extern convert
	extern puts
	extern check
        
whileLoop:				
      push ebp	
      mov ebp, esp
      mov edx, -1
theLoop:
      add edx, 1
      mov ebx, edx
      add ebx, [ebp+8]
      movzx ebx, BYTE[ebx]
      cmp bl,0   
      je Done
      
      
    push ebx
    call convert
    add esp,4
    push eax
    push DWORD[ebp+12]
    call puts
    add esp,8
    jmp theLoop
      
      
Done:
    pop ebp
    ret
