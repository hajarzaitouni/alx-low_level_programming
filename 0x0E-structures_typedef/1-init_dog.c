#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to struct dog to initialize
 * @name: dog's name to initialize
 * @age: dog's age to initialaize
 * @owner: dog's owner to initialaize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
