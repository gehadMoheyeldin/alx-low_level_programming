#include "lists.h"

/**
 * listint_len - prints all the elements of a linked list
 * @h: A pointer to the head of the list
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}

