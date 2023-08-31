#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
*
 * @b: String containing the binary number
 *
 *  Return: the converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int g;
	unsigned int deci_valu = 0;

	if (!b)
		return (0);

	for (g = 0; b[g]; i++)
	{
		if (b[g] < '0' || b[g] > '1')
			return (0);
		deci_valu = 2 * deci_valu + (b[g] - '0');
	}

	return (deci_valu);
}
