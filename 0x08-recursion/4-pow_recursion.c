#include "main.h"

/**
 * @g: value to raise
 * _pow_recursion - returns the value of x raised to the power of y
 * @h: power
 *
 * Return: result of the power
 */
int _pow_recursion(int g, int h)
{
	if (h < 0)
		return (-1);
	if (h == 0)
		return (1);
	return (g * _pow_recursion(g, h - 1));
}
