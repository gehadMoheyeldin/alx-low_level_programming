#include <stdio.h>

/**
* main - Entry point
* Description: write a program that prints all possible
* different combinations of two digits
* Return: Always 0 (Success)
*/

int main(void)
{
int m = 0 , n;
while (m <= 99)
{
n = m;
while (n <= 99)
{
if (n != m)
{
putchar((m / 10) + 48);
putchar((m % 10) + 48);
putchar(' ');
putchar((n / 10) + 48);
putchar((n % 10) + 48);
if (m != 98 || n != 99)
{
putchar(',');
putchar(' ');
}
}
n++;
}
m++;
}
putchar('\n');

return (0);
}
