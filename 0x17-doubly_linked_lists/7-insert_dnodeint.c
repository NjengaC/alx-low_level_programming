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
	dlistint_t *curr, *new = NULL;
	unsigned int i = 1;

	curr = *h;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		if (curr)
		{
			while (curr->prev != NULL)
				curr = curr->prev;
			while (curr != NULL && i < idx)
			{
				curr = curr->next;
				i++;
			}

			if (i == idx)
			{
				if (curr->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new)
					{
						new->n = n;
						new->next = curr->next;
						new->prev = curr;
						curr->next->prev = new;
						curr->next = new;
					}
				}
			}
		}
	}
	return (new);
}
