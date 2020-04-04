/*****************************************************************************************
 * Id: oste1799
 * Purpose:
 *  Create an inefficient algorithm that computer 2^n for
 *  any nonnegative integer n that is based on the formula 2^n = 2^(n-1) + 2^(n-1)
 * Input:
 *  ./assignment3 #
 * Output:
 *  2^n
 *
 * Compile:
 *  gcc -Wall -o assignment3 assignment3.c
 *******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int power(int);
int main(int argc, char *argv[]){
   int num; // num is the the power
   if(argc > 2)
   {
      return 0;
   }
   else
   {
      num = atoi(argv[1]);
   }
   if(num < 1)
   {
      return 0; // if num is negative, program won't return a value
   }
   printf("%i\n",power(num));
   return 0;
}
// This function inefficiently calculates 2^num for any nonnegative int suchb that 2^n = 2^n(-1)+2(^(n-1)
// It accepts an int from the command line and returns an int
int power(int num){
   int count = 0;
   count++; // int to keep track of how many times the recursive function iterates before num is 0
   if(num < 1)
   {
      return count; // returns control to main
   }
   return power(num - 1) + power(num - 1); // recursive call for n
}
