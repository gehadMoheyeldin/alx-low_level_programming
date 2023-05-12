#include "main.h"

/**
 * _memcpy - fills memory area  with another buffer.
 * @dest: source string
 * @src: string for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int r = 0;

while (r < n)
{

*(dest + r) = *(src + r);
r++;
}

return (dest);
}
