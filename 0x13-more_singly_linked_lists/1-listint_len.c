#include "lists.h"

/**
 * listint_len - function returning no.of nodes
 * @h: list
 *
 * Return: no. of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
