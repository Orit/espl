#include <stdlib.h>
#include <stdio.h>
#include "font.h"
#define asc2idx(asc) (asc-32)

#define SCREEN_WIDTH 80
int main(int argc, char **argv) {
  int iline;
  int index;

  for(iline = 0; iline != SYMBOL_HEIGHT; ++iline) {
	for(index = 1; index != argc; ++index) {
	char *c = argv[index];
	  printf("%s", alphabet[asc2idx(*c)][iline]);
	  printf("%s", alphabet[asc2idx(' ')][iline]);
	  }
	  
	printf("\n");
	}
	
	return 0;
}

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

 