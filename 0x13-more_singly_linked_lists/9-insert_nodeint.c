

#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new1 node in the linked list,
 * at a given index.
 *
 * @idx: index where the new1 node is to be added.
 * @n: data to insert in the new1 node.
 * @head: points to the first node in the list.
 *
 * Return: pointer to the new1 node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int n;
	listint_t *new1;
	listint_t *temp = *head;

	new1 = malloc(sizeof(listint_t));
	if (!new1 || !head)
		return (NULL);

	new1->n = n;
	new1->next = NULL;

	if (idx == 0)
	{
		new1->next = *head;
		*head = new1;
		return (new1);
	}

	for (v = 0; temp && v < idx; v++)
	{
		if (v == idx - 1)
		{
			new1->next = temp->next;
			temp->next = new1;
			return (new1);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
