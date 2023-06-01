#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to head node
 * Return: number of nodes.
 **/

size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h)
	{
		cont++;
		h = h->next;
	}

	return (cont);
}
