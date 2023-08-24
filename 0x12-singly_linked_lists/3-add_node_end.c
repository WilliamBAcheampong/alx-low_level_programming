#include <stdlib.h>
#include "lists.h"

#include <string.h>
/**
 * add_node_end - Add a new node at the rear of a linked list.
 *
 * @head: Double pointer to the list_t list,
 *
 * @str: String to put in the new node.
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newk;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newk = malloc(sizeof(list_t));
	if (!newk)
		return (NULL);

	newk->str = strdup(str);
	newk->len = len;
	newk->next = NULL;

	if (*head == NULL)
	{
		*head = newk;
		return (newk);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newk;

	return (newk);
}
