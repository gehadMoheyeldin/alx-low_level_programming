#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: the input array
 * @n: the lenght of the array
 * Return: Nothing
 *
 */

void print_array(int *a, int n)
{
int index;

for (index = 0; index < n; index++)
{
printf("%d", a[index]);
if (index != (n - 1))
{
printf(", ");
}
}
putchar('\n');
}
