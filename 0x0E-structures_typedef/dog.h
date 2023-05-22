#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's informations
 * @name: the name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: this is about dog's world
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
