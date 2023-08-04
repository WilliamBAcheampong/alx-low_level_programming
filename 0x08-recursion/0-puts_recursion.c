#include "main.h"
/**
 * a function that prints a string, followed by a new line
 * _puts_recursion - function like puts();
 * @h: input
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
