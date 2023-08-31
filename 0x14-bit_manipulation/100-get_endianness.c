#include "main.h"

/**
 * get_endianness - Checks if a machine is little endian or big endian.
 * Return: 1 for little, 0 for big.
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *c = (char *) &l;

	return (*c);
}
