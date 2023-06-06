#include "lists.h"

/**
 *sum_listint - returns  all the data in a list
 *@head: pointer to the first node
 *
 *Return: sum of the number
 */

int sum_listint(listint_t *head)
{
listint_t *temp = head;
size_t sum = 0;

while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
