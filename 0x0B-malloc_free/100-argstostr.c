#include <stdlib.h>
#include "main.h"
/**
 * argstostr - main entry
 * @av: double pointer array
 * @ac: int input
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, d, t= 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (d = 0; av[i][d]; d++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (d = 0; av[i][d]; d++)
	{
		str[t] = av[i][d];
		t++;
	}
	if (str[t] == '\0')
	{
		str[t++] = '\n';
	}
	}
	return (str);
}
