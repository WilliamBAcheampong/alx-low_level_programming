#include "lists.h"

#include <stdlib.h>
#include <string.h>
/**
 * add_node - Add a new node at the beginning of a linked list.
 * @str: new string to add in the node
*
 * @head: Double pointer to the list_t list
 *
 * Return: Returns the address of the new element, or returns NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newl;
	unsigned int len = 0;

	while (str[len])
		len++;

	newl = malloc(sizeof(list_t));
	if (!newl)
		return (NULL);

	newl->str = strdup(str);
	newl->len = len;
	newl->next = (*head);
	(*head) = newl;

	return (*head);
}
