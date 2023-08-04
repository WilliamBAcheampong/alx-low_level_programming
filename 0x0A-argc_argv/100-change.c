#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*a program that prints the minimum number of coins to make change for an amount of money.
* @argc: number of arguments
* @argv: array of arguments
* main - prints the minimum number of coins to
* make changes for an amount of money
*
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num1, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	result = 0;

	if (num1 < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num1 >= 0; j++)
	{
		while (num1 >= coins[j])
		{
			result++;
			num1 -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
