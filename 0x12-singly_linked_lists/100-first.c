#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _constructor - prints before main
 *
 * Return: void
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
