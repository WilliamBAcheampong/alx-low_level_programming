#include "lists.h"

/**
 * find_listint_loop – identifies the loop within a linked list.
 * @head: linked list to be searched for.
 *
 * Return: address of the node where the loop starts, or NULL if no loop exist.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slower = head;
	listint_t *fasterer = head;

	if (!head)
		return (NULL);

	while (slower && fasterer && faster->next)
	{
		fasterer = fasterer->next->next;
		slower = slower->next;
		if (faster == slower)
		{
			slower = head;
			while (slower != faster)
			{
				slower = slower->next;
				faster = faster->next;
			}
			return (faster);
		}
	}

	return (NULL);
}
