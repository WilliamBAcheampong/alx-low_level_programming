#include <stdlib.h>
#include "dog.h"

/**
 * @k: struct dog to free
 * free_dog - frees memory allocated for a struct dog
 */
void free_dog(dog_f *k)
{
	if (k)
	{
		free(k->name);
		free(k->owner);
		free(k);
	}
}
