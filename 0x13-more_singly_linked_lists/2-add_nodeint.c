#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds new node at beginning of listint_t list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return:  NULL if it fails
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
