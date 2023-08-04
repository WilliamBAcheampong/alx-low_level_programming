#include "main.h"
#include <unistd.h>
/**
 * @c: The character to be print
 * _putchar - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
