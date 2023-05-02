#include "lists.h"

/**
 * add_nodeint - function inserts a neew node at the beginning
 * @head: pointer
 * @n: new node data
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
