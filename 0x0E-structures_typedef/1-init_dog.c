#include "dog.h"
#include "main.h"

/**
 * init_dog - initializing the dog structure
 * @d: the dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = {name, age, owner};
	return (0);
}
