
void puts(char *c){
	int length=0;
	char *t = c;
	while(*t) ++t;
	length= t-c;
 // int length= length(c);
  write(1,c,length);
  
}