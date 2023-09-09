#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that assigns a random number to the variable n each time it is executed, then print whether the number stored in the variable n is positive or negative.
 *
 * Return: 0 
*/

int main(void)
{
          int n;
          srand(time(0));
          n = rand() - RAND_MAX / 2;
          if (n < 0){
          printf("%d is negative",n);
          }else if (n > 0){
          printf("%d is positive",n);
          }else{
          printf("%d is zero",n);
          }
          return 0;
}
