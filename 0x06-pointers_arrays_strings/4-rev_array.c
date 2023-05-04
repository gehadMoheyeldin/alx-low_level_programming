#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	j = 0;
	t = n - 1;
	while (j < t)
	{
		i = *(a + j);
		*(a + j) = *(a + t);
		*(a + t) = i;
		j++;
		t--;
	}
}
