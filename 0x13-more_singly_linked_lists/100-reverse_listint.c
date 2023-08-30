#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 *
 * @head: This points to the first node in a list.
 *
 * Return: A pointer to the first node in the new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *after = NULL;

	while (*head)
	{
		after = (*head)->after;
		(*head)->after = before;
		before = *head;
		*head = after;
	}

	*head = before;

	return (*head);
}