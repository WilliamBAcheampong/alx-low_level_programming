#include "lists.h"

/**
 * free_listint_safe –This frees a linked list.
 * @h: Points to the first node in a linked list.
 *
 * Return: Number of elements in a freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int difft;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difft = *h - (*h)->next;
		if (difft > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
