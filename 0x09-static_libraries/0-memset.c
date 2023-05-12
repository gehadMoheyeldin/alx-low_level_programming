#include "main.h"

/**
 * _memset - fills memory area  with a constant byte.
 * @s: source string
 * @b: the contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */


char *_memset(char *s, char b, unsigned int n)
{

unsigned int r = 0;

while (r < n)
{

*(s + r) = b;
r++;

}
return (s);
}

