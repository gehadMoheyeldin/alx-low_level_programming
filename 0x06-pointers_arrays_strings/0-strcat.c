#include "main.h"
/**
 * _strcat - function that concatenates
 * 2 strings .
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;

/*find the size of dest array */
while (dest[c])
	c++;

/*iterate through each scr array value without the null byte*/
for (c2 = 0; scr[c2] ; c2++)

/*append scr [c2] to dest [c] while overwritting the null byte in dest*/
dest[c++] = scr[c2];

return (dest);
}
