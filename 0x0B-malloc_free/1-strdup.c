#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int s, k = 0;

	if (str == NULL)
		return (NULL);
	s = 0;
	while (str[s] != '\0')
		s++;

	aaa = malloc(sizeof(char) * (s + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[k]; k++)
		aaa[k] = str[k];

	return (aaa);
}
