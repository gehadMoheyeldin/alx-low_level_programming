#include "main.h"

/**
 * _sqrt_recursion - return  a natural number square root .
 * @n: natural number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_manual(n, 1));
	}
}
/**
 * sqrt_manual - find square root .
 * @n: natural number
 * @i: counter or number to be multiplied.
 *
 * Return: int 
 */
int sqrt_manual(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_manual(n, i + 1));
	}
}

