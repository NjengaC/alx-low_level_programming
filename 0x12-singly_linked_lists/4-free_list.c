#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list_t list to be freed
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
