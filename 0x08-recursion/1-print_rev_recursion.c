#include "main.h"
/**
 * @t: The string to print.
 * _print_rev_recursion - Prints string in reverse.
 */
void _print_rev_recursion(char *t)
{
	if (*t)
	{
		_print_rev_recursion(t + 1);
		_putchar(*t);
	}
}
