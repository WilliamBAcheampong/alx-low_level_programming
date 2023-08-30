#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in the linked list,
 * at a given index.
 *
 * @idx: index where the new node is to be added.
 * @n: data to insert in the new node.
 * @head: points to the first node in the list.
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int n;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (v = 0; temp && v < idx; v++)
	{
		if (v == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
