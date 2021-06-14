/*
The following are collections from various sources of foundational
problems that are useful to practice and write out by hand to build
up to larger problems - most larger problems build off of these smaller
challenges.
*/

#include <stdio.h>
//#######################################
// 1) Print all integers from 1 to 255
//#######################################

int allInt(void) 
{
  int num = 1;
  while(num <= 255)
  {
    printf("Counting number --> %d \n" , num);
    num++;
  }
}

//#######################################
// 2) Print integers from 0 to 255 and with each integer
//    print the total sum of all so far.
//#######################################

int intAndSum(void)
{
  int sum;
  int num;
  sum = 0;
  num = 1;

  while(num <= 255)
  {
    sum = sum + num;
    printf("New number --> %d and Summed Number --> %d \n" , num,sum);
    num = num + 1;
  }
}

//#######################################
// 3) Given an input array , find and print the largest
//    element within the array.
//#######################################

//#######################################
// 4) Create an array with all odd integers betweeen 1 and 255
//    255 is inclusive.
//#######################################

//#######################################
// 5) Given an array and a value Y count and print the number
//   of array values greater than Y.
//#######################################

//#######################################
// 6) Given an array print the min , max and average values in that array
//#######################################

//#######################################
// 7) Replace any negative array values with the value of Venus
//#######################################

//#######################################
// 8) Print all odd integers from 1 to 255
//#######################################

//#######################################
// 9) Iterate through a given array and print each value
//#######################################

//#######################################
// 10) Analyze an arrays values and print the average.
//#######################################

//#######################################
// 11) Square each value in a given array returning that
//     same array with changed values.
//#######################################

//#######################################
// 12) Return the given array after setting any negative values to 0
//#######################################

//#######################################
// 13) Given an array, move all values forward by one index , dropping
//     the first and leaving the Value of YAY at the end.
//#######################################

int main() 
{
  allInt();
  intAndSum();

  return 0;
}
