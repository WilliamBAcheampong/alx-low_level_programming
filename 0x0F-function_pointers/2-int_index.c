#include "function_pointers.h"
/**
  * @array1: array
 * @sizeofe: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * int_index - returns index place if comparison = true, else return -1
 * Return: 0
 */
int int_index(int *array1, int sizeofe, int (*cmp)(int))
{
	int j;

	if (array1 == NULL || sizeofe <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < sizeofe; j++)
	{
		if (cmp(array1[i]))
			return (i);
	}
	return (-1);
}
