#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @d: pointer to the list_t list.
 * Return: number of elements in d.
 */
size_t list_len(const list_t *d)
{
	size_t k = 0;

	while (d)
	{
		k++;
		d = d->next;
	}
	return (k);
}
