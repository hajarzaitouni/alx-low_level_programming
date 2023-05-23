#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * *new_dog -  creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: a pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;
	int len1, len2;

	mydog = malloc(sizeof(dog_t));
	len1 = _strlen(name);
	len2 = _strlen(owner);

	if (mydog == 0)
		return (NULL);

	mydog->name = malloc(sizeof(char) * (len1 + 1));
	mydog->owner = malloc(sizeof(char) * (len2 + 1));

	if (mydog->name == 0)
	{
		free(mydog);
		return (NULL);
	}
	if (mydog->owner == 0)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}
	_strcpy(mydog->name, name);
	mydog->age = age;
	_strcpy(mydog->owner, owner);

	return (mydog);
}

/**
 * _strlen - calculates the length of a string
 * @s: a pointer to string
 * Return: the length of the string
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string
 * @dest: a pointer to string in which we copy to
 * @src: a pointer to string we copy from
 * Return: a pointer to string
 */

char *_strcpy(char *dest, char *src)
{
	int i, counter = 0;

	for (i = 0; src[i] != '\0'; i++)
		counter++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
