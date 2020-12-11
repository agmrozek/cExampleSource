#include <stdio.h>

int main(void) {
  int n;
  int triangularNumber;
  int number;

  printf("What size triangle do you want? ");
  scanf("%i", &number); //receive number from user %i formatspecifier int assign to number var

  triangularNumber = 0;

  for(n = 1; n <= number; ++n)
    triangularNumber +=n; // aka triangularNumber = triangularNumber + n
  
  printf("Triangular number %i is %i \n" , number, triangularNumber);
  return 0;
}

