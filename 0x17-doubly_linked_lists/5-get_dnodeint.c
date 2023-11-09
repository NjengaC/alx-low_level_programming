#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head
 * @index: index/position of the node
 * Return: node at position index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index > 0)
	{
		head = head->next;
		index--;
	}
	if (head)
		return (head);
	else
		return (NULL);
}
