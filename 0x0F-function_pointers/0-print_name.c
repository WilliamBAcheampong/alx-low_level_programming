#include <stdio.h>
#include "function_pointers.h"
/**
 * print_sname – using pointer to function, print name
 * @f: pointer to function
 *  @sname: string to add
 * Return: nothing
 **/
void print_sname(char *sname, void (*f)(char *))
{
	if (sname == NULL || f == NULL)
		return;

	f(sname);
}
