#include "lists.h"

int _strlen_recursion(char *s);

/**
 * add_node_end - adds a new node at the end of a list
 * @head: address of  pointer to head node
 * @str: string fiels of the new node
 * Return: size of list
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen_recursion(new->str);
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	else
		*head = new;

	return (new);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: length of @s.
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
