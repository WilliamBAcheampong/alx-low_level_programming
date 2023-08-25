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
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
