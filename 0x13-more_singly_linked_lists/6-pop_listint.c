#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes head node of listint_t linked list
 * and returns the head node’s data (n).
 * @head: pointer to the first element in the linked list
 *
 * Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
