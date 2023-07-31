#include "main.h"
/**
* @b: the desired value
  * @s: starting address of memory to be filled
  * @n: number of bytes to be changed
 *_memset - fill a block of memory with a specific value
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
