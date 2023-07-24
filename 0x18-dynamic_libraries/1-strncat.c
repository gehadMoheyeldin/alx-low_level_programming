#include "main.h"

/**
 *  _strncat - a function that concatenat two  strings.
 *  @dest: pointer to destination input
 *  @src: pointer to source input
 *  @n: most number of bytes from @src
 *  Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
	c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[c + i] = src[i];

	/*null terminate dest */
	dest[c + i] = '\0';

	return (dest);
}
