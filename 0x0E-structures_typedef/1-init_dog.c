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
