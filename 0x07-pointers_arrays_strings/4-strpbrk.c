#include "main.h"
/**
 * @accept: input
 * _strpbrk - Entry point
 * Return: Always 0 (Success)
 * @s: input
 */

char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
