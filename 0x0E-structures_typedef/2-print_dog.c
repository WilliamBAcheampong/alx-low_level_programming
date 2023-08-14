#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @k: struct dog to print
 */
void print_dog(struct dog *k)
{
	if (k == NULL)
		return;

	if (k->name == NULL)
		k->name = "(nil)";
	if (k->owner == NULL)
		k->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", k->name, k->age, k->owner);
}
