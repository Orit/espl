#include <stdio.h>
#include "namelist.h"
#include <stdlib.h>
#include <ctype.h>
#include "fgetname.h"
#include <string.h>
#include <netinet/in.h>
#define NAMELEN 64

int str_alp(char *s1,char *s2) {
  //  if(strcmp(s1,s2)==0){
     // return(0);}   //if they are equal
	int i;
        for(i=0;s1[i]!=0;i++) {
              if(s1[i] > s2[i]) { 
		return(1);
		
	      }
              else return(2);
        }
 
   // return (2);  //hey if they are not equal and s1 not greater than s2 then s2 is greater
}

namelist sort_list(namelist nl){
  int i;
  int j;
  int ans;
 namelist orderlist =nl;
  char *c;
  for(i = 0; i!=orderlist->size; ++i){
      for(j=1;j!=orderlist->size;++j){
	ans=str_alp(orderlist->names[i].name, orderlist->names[j].name);
	if(ans==1){
	  namelist n2 = make_namelist();
	  printf("%d", ans);
	  n2->names[0] = orderlist->names[j];
	   printf("%s", n2->names[0].name);
	  nl->names[j]=nl->names[i];
	  nl->names[i]=n2->names[0];
     }
   } 
}
return nl;
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
    /*
    int counter=0;
 // for(index=1; index<argc, index++){  
    
 	//while(fgetname(name, sizeof(name), f1)){
//	printf("%s\n", name);

     while (!feof(f1)) {
	  char word[100];
	  char c=fgetc(f1);
	if((!isdigit(c))&&(!isalpha(c))) { 
	    word[counter] = 0;
	    add_name(nl,word);
	    counter=0;
	}
     else{
    word[counter]=c;
    counter++;
  }   
      }

 */
namelist orderlist = make_namelist();
orderlist= sort_list(nl);

 int i;
for(i = 0; i!=orderlist->size; ++i){
  printf("%s", orderlist->names[i].name);
   printf("%d", orderlist->names[i].count);
   printf("\n");

 }
 
return 0;
}