#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic info
 * @name: 1st
 * @age: 2nd
 * @owner: 3rd
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_f - typedef for struct dog
 */
typedef struct dog dog_f;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_f *new_dog(char *name, float age, char *owner);
void free_dog(dog_f *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
