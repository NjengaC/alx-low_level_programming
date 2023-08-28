#include "lists.h"

/**
 * get_nodeint_at_index - function returns the 9th node
 * @head: pointer to the first node
 * @index: index of the the node, starting at 0
 *
 * Return: pointer to node or NULL if node is empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
