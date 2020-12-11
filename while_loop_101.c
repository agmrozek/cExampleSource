/*
While looping examples
*/

#include <stdio.h>

int main(void) {

  int count = 1;

  while( count <= 5 ) {
    printf("%i \n", count);
    ++count; // aka count = count + 1
  }
  return 0;
}
