#include "lists.h"

/**
*pop_listint - deletes the head node of  list
*@head: head of the list
*
*Return: value of popped node data
*/

int pop_listint(listint_t **head)
{
listint_t *node;
int n;

if (*head == NULL)
return (0);
node = *head;
n = node->n;
free(node);

*head = (*head)->next;
return (n);

}
