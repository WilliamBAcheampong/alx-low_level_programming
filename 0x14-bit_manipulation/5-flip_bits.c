#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int e, counter = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (e = 63; e >= 0; e--)
	{
		curr = exclusive >> e;
		if (curr & 1)
			counter++;
	}

	return (counter);
}
