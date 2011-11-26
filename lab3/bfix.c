#include <stdio.h>
#include <stdlib.h>
#include "diff.h"
#include <ctype.h>
#include <assert.h>

int main(int argc, char *argv[]){
  
  
  FILE *f1= fopen(argv[1], "r" ); 
	if (!f1)
	{
	  fprintf(stderr, "Unable to open file %s", "ab.diff");
	  return 0;
	} 
	
 
  FILE *f2= fopen(argv[2], "r" ); 
	if (!f2)
	{
	  fprintf(stderr, "Unable to open file %s", "ab.diff");
	  return 0;
	}  
;
    while(!feof(f1)){
       char d[100];
	fgets(d, 99, f1);
	printf("%s", d);
	struct diff diff;
	parsediff(d, &diff);
	//printf("%s",d)
	//printf("%ld", diff.offset);
	fseek(f2, diff.offset-1, SEEK_SET);
	char c[100];
	fread(c, 1, 1, f2);
	printf("%s",c);
	fseek(f2, diff.offset-1, SEEK_SET);
	fwrite(((char *)&diff.new),1,1,f2);
      
    }
    close(f1);
    close(f2);
    
return 0;
}