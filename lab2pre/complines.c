#include <stdio.h>
#include <string.h>
main(int argc, char *argv[]) {
  
FILE *f1 = fopen("t1.txt" , "rt");
  if(!f1)
    {
  fprintf(stderr, "Can't open input file t1\n");
    }
FILE *f2 = fopen("t2.txt" , "rt");
  if(!f2)
    {
   fprintf(stderr, "Can't open input file t2\n");
    }

  while (!feof(f1)){
    char t1[100];
    char t2[100];
    fgets(t1, 99, f1);
    fgets(t2,99, f2);
    if( strcmp(t1,t2)!=0) {
	printf ("%s", t1);
      }
}
 
fclose(f1);
fclose(f2); 

return 0;
}