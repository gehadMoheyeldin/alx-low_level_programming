#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: print the value of a status:greater than 5, less than 6, or 0.
 * Return: Always  0 (success)
 */

int main(void)
{
int n;
int a;

srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;

if (a > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, a);
if (a == 0)
printf("Last digit of %d is %d and is 0\n", n, a);
if (a < 6 && a != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
return (0);
}
