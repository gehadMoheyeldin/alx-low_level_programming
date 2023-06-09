#include "main.h"

/**
 * clear_bit - Function that clear the value of a bit to 1 at a given index.
 * @n: number input.
 * @index: is the index, starting from 0 of the bit you want to set.
 *  Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n & (~add);
	return (1);
}
