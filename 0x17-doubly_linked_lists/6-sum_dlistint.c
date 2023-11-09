#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data(n) of a DLL
 * @head: head
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
