#include "lists.h"

/**
 * free_listint - functn frees a list
 * @head: list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
