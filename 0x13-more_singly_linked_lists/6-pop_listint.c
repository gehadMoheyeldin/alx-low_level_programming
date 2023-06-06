#include "lists.h"

/**
*pop_listint - deletes the head node of  list
*@head: head of the list to the first node
*
*Return: value of popped node
*/

int pop_listint(listint_t **head)
{

	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
