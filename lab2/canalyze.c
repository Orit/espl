#include <stdio.h>
#include "namelist.h"
#include <stdlib.h>
#include <ctype.h>
#include "fgetname.h"
#include <string.h>
#include <netinet/in.h>
#define NAMELEN 64

str_alp(const void *p1, const void *p2)
{
   /* The actual arguments to this function are "pointers to
      pointers to char", but strcmp(3) arguments are "pointers
      to char", hence the following cast plus dereference */
	const struct namestat *n1;
	const struct namestat *n2;
	n1 = (struct namestat*)p1;
	n2 = (struct namestat*)p2;
	const char *s1 = n1->name;
	const char *s2 = n2->name;
   return strcmp(s1, s2);
}


int main(int argc, char *argv[])  {
  
   namelist nl = make_namelist();
   int index;
   char name[64];
  for(index=1; index<argc; index++){
    
      FILE *stream= fopen(argv[index] , "rt");
      if(!stream){
	fprintf(stderr, "Can't open input file t1\n");
	}

    while(fgetname(name, sizeof(name), stream)) {
	    add_name(nl,name);
      
    }
    fclose(stream);

  }
  qsort(nl->names,nl->size, sizeof(nl->names[0]), str_alp);
int j;
	for(j = 0; j!=nl->size; ++j) {
		printf("%s %d\n",nl->names[j].name,nl->names[j].count);
	}
 
return 0;
}