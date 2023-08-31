#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @index: Index of the bit to clear.
 *
 * @n: Pointer to the number to change
 * Return: 1 for success and -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
