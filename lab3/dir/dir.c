
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, char *argv[]){
  
DIR *dir;
struct dirent *ent;
        dir = opendir ("/users/studs/bsc/2010/berda/SPL_lab");
if (dir != NULL) {

  /* print all the files and directories within directory */
  while ((ent = readdir (dir)) != NULL) {
    printf ("%s\n", ent->d_name);
  }
  closedir (dir);
} else {
  /* could not open directory */
  perror ("");
  return EXIT_FAILURE;
}

return 0;

}




