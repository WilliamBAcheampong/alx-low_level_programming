#include <stdio.h>
#include "main.h"

/**
* program that prints the number of arguments passed into it.
* @argc: number of arguments
* @argv: array of arguments
* main - print the number of arguments passed to the program
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
