#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: always 0 success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = strlen(name);
		owner_len = strlen(owner);
		new_dog = malloc(sizeof(dog_t));

		if (new_dog == NULL)
			return (NULL);

		mew_dog->name = malloc(sizeof(char) * name_len);

		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}

		new_dog->owner = malloc(sizeof(char) * owner_len);

		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
		new_dog->name = strcpy(new_dog->name, name);
		new_dog->owner = strcpy(new_dog->owner, owner);
		new_dog->age = age;
	}
	return (new_dog);
}
