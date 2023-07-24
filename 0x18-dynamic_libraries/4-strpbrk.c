#include "main.h"

/**
 * _strpbrk - prints the consecutive caracters of any of a set of bytes.
 * @s: source string
 * @accept: searching string
 * Return: new string.
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int r, j;

for (r = 0; *(s + r); r++)
{
for (j = 0; *(accept + j); j++)
{
if (*(s + r) == *(accept + j))
{
break;
}
}
if (*(accept + j) != '\0')
{
return (s + r);
}
}

return (0);
}

