#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: pointer to list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
