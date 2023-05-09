#include "main.h"

/**
 * _strspn -gets the consecutive charcters of  a perfix substring .
 * @s: source string
 * @accept: searching string
 * Return: unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int r, f;

for (f = 0; *(s + f); f++)
{
for (r = 0; *(accept + r); r++)
{
if (*(s + f) == *(accept + r))
break;
}

if (*(accept + r) == '\0')
break;
}

return (f);

}
