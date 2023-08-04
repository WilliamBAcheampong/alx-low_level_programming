#include "main.h"

/**
 * @n: number to return the factorial from
 * factorial - returns factorial of number
 *
 * Return:returns the factorial of n
 */
int factorial(int m)
{
	if (m < 0)
		return (-1);
	if (m == 0)
		return (1);
	return (m * factorial(m - 1));
}
