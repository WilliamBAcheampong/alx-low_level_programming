#include "main.h"
/**
 * @s: The string to be measured.
 * _strlen_recursion - Returns the length of a string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *t)
{
	int longIt = 0;

	if (*t)
	{
		longIt++;
		longIt += _strlen_recursion(t + 1);
	}

	return (longIt);
}
