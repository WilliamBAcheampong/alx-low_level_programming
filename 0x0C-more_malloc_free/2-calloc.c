#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @n: number of times to copy t
 * @t: char to copy
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char t, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = t;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @size: size of each element
 * @numemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int numemb, unsigned int size)
{
	char *ptr;

	if (numemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * numemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, numemb * size);

	return (ptr);
}
