/*
Accepts a number as input and reverses the digits order
Logic:
- Modulus operator % gives the remainder of 2 intergers divided.
- eg. 1234 / 10 = 123 and 123 % 10 gives us 3 which is the next digit in the reverse order
- The while loop does this operation on each digit of the input number and returns it reversed
*/

#include <stdio.h>

int main(void) {

  int number, right_digit;

  printf("Enter a number--> ");
  scanf("%i", &number); // receive input as %i format specifier int and assign to int var number

  while( number != 0 ) {
    right_digit = number % 10;
    printf("%i" , right_digit);
    number = number / 10;
  }

  printf("\n");
  return 0;
}
