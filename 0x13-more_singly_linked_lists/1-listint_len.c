#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}

