#include <stdio.h>

int main(int argc, char *argv[]) {
  int arg_count = argc;
  char *arg1 = argv[0];
  char *arg2 = argv[1];

  printf("Total number of arguments passed to program is ---> %d \n", arg_count);
  printf("Value of argument 1 is the program name ---> %s \n", arg1);
  printf("Value of argument 2 is user provided argument --> %s \n", arg2);

  return 0;
}
