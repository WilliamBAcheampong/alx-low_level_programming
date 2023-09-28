#include "main.h"
/**
 * get_endianness - Checks if a machine is little or big endian
*
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int v = 1;
	char *c = (char *) &v;

	return (*c);
}
