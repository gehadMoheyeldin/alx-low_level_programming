#include "lists.h"

/**
*pop_listint - deletes the head node of  list
*@head: head of the list
*
*Return: value of popped node data
*/

int pop_listint(listint_t **head)
{
listint_t *popped;
int content;

if (*head == NULL)
return (0);

popped = *head;
content = popped->n;
free(popped);

*head = (*head)->next;
return (content);
}
