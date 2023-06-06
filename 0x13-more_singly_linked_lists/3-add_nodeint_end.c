#include "lists.h"

/**
 *add_nodeint_end - adds a node to the button
 *@head: pointer to the head of the list
 *@n: value for new node as content
 *
 *Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (node != NULL)
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
