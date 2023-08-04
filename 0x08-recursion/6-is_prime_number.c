#include "main.h"

int actual_prime(int l, int j);

/**
* @l: number to evaluate
* is_prime_number - says if an integer is a prime number or not
*
* Return: 1 if n is a prime number, 0 if not
*/
int is_prime_number(int l)
{
	if (l <= 1)
		return (0);
	return (actual_prime(l, l - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int l, int j)
{
	if (j == 1)
		return (1);
	if (l % j == 0 && j > 0)
		return (0);
	return (actual_prime(l, j - 1));
}
