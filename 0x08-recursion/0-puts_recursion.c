#include "main.h"
/**
 * @s: input
 * _puts_recursion - function like puts();
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *h)
{
	if (*h)
	{
		_putchar(*h);
		_puts_recursion(h + 1);
	}

	else
		_putchar('\n');
}
