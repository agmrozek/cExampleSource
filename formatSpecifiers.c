#include <stdio.h>

int main(void) {
  int integerVar = 100;
  float floatVar = 3.149999;
  double doubleVar = 1.44e+100;
  char charVar = 'V';
  _Bool boolVar = 0;

  printf("The variable integerVar = %i \n" , integerVar);
  printf("The variable floatVar = %f \n" , floatVar);
  printf("The variable doubleVar = %e \n" , doubleVar);
  printf("The variable doubleVar = %g \n" , doubleVar);
  printf("The variable charVar = %c \n" , charVar);
  printf("The variable boolVar = %i \n" , boolVar);

  return 0;
}
