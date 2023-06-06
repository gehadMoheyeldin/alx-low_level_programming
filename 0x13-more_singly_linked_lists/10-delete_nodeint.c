#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 *
 * Return: the address of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int i = 0;
if (!head || !*head)
return (-1)
if (!index)
{
node = *head
*head = (*head)->next;
free(node);
return (1);		}
node = *head;
while (node)
{
if (i == index)
{
prev_node->next = node->next;
free(node);
return(1);
}
i++;
prev_node = node;
node = node->next;
}
return (-1);
}
