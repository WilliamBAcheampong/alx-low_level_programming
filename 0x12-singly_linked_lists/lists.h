#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Singly linked list.
 * @next: Point to the next node.
*
 * @len: Length of the string,
 * @str: string - (malloc string)
 *
 * Description: Node structure using singly linked list for,
 * Holberton project.
 */
typedef struct list_s
{
	char *str;
          struct list_s *next;
	unsigned int len;
	
} list_t;

size_t print_list(const list_t *d);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *d);

void free_list(list_t *head);

#endif
