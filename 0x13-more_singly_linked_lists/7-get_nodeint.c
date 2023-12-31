#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
* @index: index of the node to return,
 * @head: first node in the linked list.
 *
 *
 * Return: Pointer to the node we're looking for, NULL if otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r = 0;
	listint_t *temp = head;

	while (temp && r < index)
	{
		temp = temp->next;
		r++;
	}

	return (temp ? temp : NULL);
}
