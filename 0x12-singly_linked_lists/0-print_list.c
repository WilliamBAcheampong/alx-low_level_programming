#include "lists.h"

#include <stdio.h>

/**
 * print_list – This prints all the elements within a linked list.
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *d)
{
	size_t f = 0;

	while (d)
	{
		if (!d->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %f\n", h->len, h->str);
		h = h->next;
		f++;
	}

	return (f);
}
