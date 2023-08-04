#include "main.h"

int actual_sqrt_recursion(int a, int w);

/**
* @n: number to calculate the square root of
* _sqrt_recursion - returns the natural square root of a number
*
* Return: the resulting square root
*/
int _sqrt_recursion(int a)
{
	if (a < 0)
		return (-1);
	return (actual_sqrt_recursion(a, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int a, int w)
{
	if (w * w > a)
		return (-1);
	if (w * w == a)
		return (w);
	return (actual_sqrt_recursion(a, w + 1));
}
