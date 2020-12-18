#include <stdio.h>
#include <stdlib.h>

int main() {
  enum CompanyName { VENUS, CIS, EBAY }; // Define enum variable with acceptable values

  enum CompanyName myPuppy = VENUS; // Create a variable of enum type CompanyName
  enum CompanyName coolStuff = EBAY;

  printf("The value of myPuppy enum variable is: %d \n", myPuppy);
  printf("The value of coolStuff enum variable is: %d \n", coolStuff);

  return 0;
}
