#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the unsigned int form of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		value = value << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			value = value | 1;
		b++;
	}
	return (value);
}
