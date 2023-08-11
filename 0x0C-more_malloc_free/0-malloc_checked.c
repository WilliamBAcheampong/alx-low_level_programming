#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * Return: a pointer to the allocated memory
 *  @y: number of bytes to allocate
 */
void *malloc_checked(unsigned int y)
{
	void *ptr;

	ptr = malloc(y);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
