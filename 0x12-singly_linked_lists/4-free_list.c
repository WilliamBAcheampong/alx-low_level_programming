#include <stdlib.h>

#include "lists.h"

/**
 * free_list - Frees or a linked list,
 *
 * @head: list_t list to be freed
 *
 */
void free_list(list_t *head)
{
	list_t *tempor;

	while (head)
	{
		tempor = head->next;
		free(head->str);
		free(head);
		head = tempor
;
	}
}
