#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array element on a newl
 * @array: array
 * @action: pointer to print in regular or hex
 * @size: how many elem to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}