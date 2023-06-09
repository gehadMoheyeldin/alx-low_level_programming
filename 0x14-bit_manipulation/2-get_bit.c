#include "main.h"


/**
 * get_bit - gets the bit at the index
 * @n: bit value in the index
 * @index: the bit to get
 *
 *  Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
