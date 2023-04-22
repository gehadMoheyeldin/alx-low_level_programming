#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description get the last degiti of a number
 * Return: Always 0
 */

int main(void)
{
int n;
int ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (digit > 5)

printf("last digit of %i is %i and is greater than 5\n", n, digit);

}
else if (digit == 0)
{
printf("last digit of %i is %i and is 0\n", n, digit);

}
else if (digit < 6 && digit != 0)
{
printf("last digit of %i is %i and is  less than 6 and not 0\n", n, digit );

}
return (0);
}
