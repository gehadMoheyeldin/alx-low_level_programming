#include "lists.h"

/**
 *add_nodeint - Adds a new node to the top
 *@head: A pointer to the address of the first node
 *@n: value for  the new node to contain
 *
 *Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
