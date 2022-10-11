#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Description: creating a dog structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
