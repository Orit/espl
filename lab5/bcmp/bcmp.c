#include <stdio.h>
#include <stdlib.h>
#include "diff.h"
#include <ctype.h>
#include <assert.h>

int main(int argc, char *argv[]){

  int counter =0;
      FILE *f1= fopen(argv[1], "rb+" ); 
      FILE *f2= fopen(argv[2], "rb+" ); 
      	if (!f1)
	{
	  fprintf(stderr, "Unable to open file %s", argv[1]);
	  return 0;
	}
	     	if (!f2)
	{
		fprintf(stderr, "Unable to open file %s", argv[1]);
		return 0;
	}
    while( (!feof(f1))&&(!feof(f2))){
    int c1=fgetc(f1);
    int c2=fgetc(f2);
    counter++;
    if(c1!=c2){
     printf("byte \%d", counter);     
     printf(" ");
    printf("%d", c1);
    printf(" ");
     printf("%d", c2);
    printf("\n");
   //   break;fprintf
    }
 }

return 0;

}