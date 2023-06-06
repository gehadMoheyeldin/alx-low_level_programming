#include "lists.h"

/**
*pop_listint - deletes the head node of  list
*@head: head of the list to the first node
*
*Return: value of popped node
*/

int pop_listint(listint_t **head)
{

listint_t *popped;
int n;

if (*head == NULL)
return (0);

popped = *head;

n = popped->n;

free(popped);

*head = (*head)->next;

return (n);
}
