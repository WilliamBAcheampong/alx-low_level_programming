#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: pointer to the head of the listint_t to be checked.
 *
 * Return: If the list is not looped it returns 0,
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *snail, *rabbit;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	snail = head->next;
	rabbit = (head->next)->next;

	while (rabbit)
	{
		if (snail == rabbit)
		{
			snail = head;
			while (snail != rabbit)
			{
				nodes++;
				snail = snail->next;
				rabbit = rabbit->next;
			}

			snail = snail->next;
			while (snail != rabbit)
			{
				nodes++;
				snail = snail->next;
			}

			return (nodes);
		}

		snail = snail->next;
		rabbit = (rabbit->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - This prints a listint_t list safely.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: returns number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
