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
	dog_t *new_doggie;

	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = strlen(name);
		owner_len = strlen(owner);
		new_doggie = malloc(sizeof(dog_t));

		if (new_doggie == NULL)
			return (NULL);

		new_doggie->name = malloc(sizeof(char) * name_len + 1);

		if (new_doggie->name == NULL)
		{
			free(new_doggie);
			return (NULL);
		}

		new_doggie->owner = malloc(sizeof(char) * owner_len + 1);

		if (new_doggie->owner == NULL)
		{
			free(new_doggie->name);
			free(new_doggie);
			return (NULL);
		}
		new_doggie->name = strcpy(new_doggie->name, name);
		new_doggie->owner = strcpy(new_doggie->owner, owner);
		new_doggie->age = age;
	}
	return (new_doggie);
}
