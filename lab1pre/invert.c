#include <stdio.h>


main(int argc, char *argv[]){
  
int i;

for(i=argc-1; i > 0; i--){
	printf("arg %d: %s\n", i, argv[i]);
}



return 0;

  


}
