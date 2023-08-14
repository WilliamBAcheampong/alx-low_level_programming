#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @k: pointer to struct dog to initialize
 * @name: name to initialize
  * @owner: owner to initialize
  * @age: age to initialize
*/
void init_dog(struct dog *k, char *name, float age, char *owner)
{
	if (k == NULL)
		k = malloc(sizeof(struct dog));
	k->name = name;
	k->age = age;
	k->owner = owner;
}


#include <stdlib.h>
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



#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @x: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *x)
{
	int r;

	r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	return (r);
}

/**
 * *_strcpy - copies the string pointed to by strc
 * @strc: string to be copied
 * to the buffer pointed to by desti
 * including the terminating null byte (\0)
 * to the buffer pointed to by desti
 * @desti: pointer to the buffer in which we copy the string
 * @strc: string to be copied
 * Return: the pointer to desti
 */
char *_strcpy(char *desti, char *strc)
{
	int len, r;

	len = 0;

	while (strc[len] != '\0')
	{
		len++;
	}

	for (r = 0; r < len; r++)
	{
		desti[r] = src[r];
	}
	desti[r] = '\0';

	return (desti);
}

/**
 * new_dog - creates a new dog
 * @age: age of the dog
 * @name: name of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_f *new_dog(char *name, float age, char *owner)
{
	dog_f *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_f));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
