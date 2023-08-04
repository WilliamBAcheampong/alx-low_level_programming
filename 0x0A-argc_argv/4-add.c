#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*a program that adds positive numbers.
* check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*variables declaration*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*string Count*/

	{
		if (!isdigit(str[count])) /*checks if str there are digits*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Prints name of a program
 * @argc: Counts the arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*variable declaration*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI -->used to convert string to int*/
			sum += str_to_int;
		}

		/*Condition to check if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*prints sum*/

	return (0);
}
