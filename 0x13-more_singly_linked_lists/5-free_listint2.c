#include "lists.h"

/**
*free_listint2 - frees a list of ints
*@head: pointer to the head of the list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
listint_t *node;
listint_t **temp = head;

if (temp != NULL)
{
while (*head != NULL)
{
node = *head;
free(node);
*head = (*head)->next;
}
*temp = NULL;
}
}
