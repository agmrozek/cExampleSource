/*
While looping examples
Looping Logic:

init_expression;
while( loop_condition ) { // if loop condition resolves to true loop block executes until condition is false
  codeblock statements;
  loop_incrementer 
}

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
