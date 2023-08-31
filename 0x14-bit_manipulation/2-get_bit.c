#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
  * @index: index of the bit
 *
 * @n: This is the number to search
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_valu;

	if (index > 63)
		return (-1);

	bit_valu = (n >> index) & 1;

	return (bit_valu);
}
