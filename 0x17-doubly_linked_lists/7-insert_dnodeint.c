#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: head pointer
 * @idx: index of the list where new node comes in
 * @n: data(n) member
 * Return: address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *current;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	current = *h;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (i < idx - 1)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = (current != NULL) ? current->next : NULL;
	new->prev = current;

	if (current != NULL)
	{
		current->next = new;
	}
	return (new);
}
