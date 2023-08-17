#include "function_pointers.h"
#include <stdio.h>
/**
 * array1_iterator - prints each array elements on a newline
 * @array1: array
 * @action: pointer to print in regular or hex
 * @sizeofe: how many elements to print
 * Return: void
 */
void array1_iterator(int *array1, sizeofe_t size, void (*action)(int))
{
	unsigned int i;

	if (array1 == NULL || action == NULL)
		return;

	for (i = 0; i < sizeofe; i++)
	{
		action(array1[i]);
	}
}
