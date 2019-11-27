#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char ** parse_args( char * line );

char ** parse_args( char * line ) {
  char ** ret = malloc(100);
  char * inst;
  int q = 0;
  while(inst != NULL) {
    printf("begin while\n");
    inst = strsep(&line, " ");
    printf("next line\n");
    ret[q] = inst;
    q++;
  }
  return ret;
}

int main() {
  char ** bro = parse_args("ls -a -l");
  execvp(bro[0],bro);
}
