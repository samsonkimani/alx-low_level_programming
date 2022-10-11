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
	struct dog *d;

	d = &my_dog;
	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;
	return (0);
}
