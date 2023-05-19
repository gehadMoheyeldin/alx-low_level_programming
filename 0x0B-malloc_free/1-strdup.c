#include "main.h"


/**
 * _strdup - copy of the  input string in newly allocated memory
 * @str: string
 * Return: pointer to duplicate string or NULL if failure
 */

char *_strdup(char *str)
{

char *pstr;
unsigned int i = 0;

if (str == 0)
return (0);

while (str[i] != 0)
i++;
i++;

pstr = malloc(sizeof(char) * i);

for (i = 0; str[i] != 0; i++)
pstr[i] = str[i];

pstr[i] = 0;

return (pstr);

}
