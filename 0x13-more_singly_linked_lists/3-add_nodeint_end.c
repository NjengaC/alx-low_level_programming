#include "lists.h"

/**
 * add_nodeint_end - function inserts new node at the end of the list
 * @head: pointer to the first node
 * @n: int member to add.
 *
 * Return: address of the node where the loop starts or NULL if there is no loop
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
