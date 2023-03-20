#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new 
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = NULL;

	new = malloc(sizeof(dog_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->name = malloc(strlen(name) + 1);
	strcpy(new->name, name);

	if (!new->name)
	{
		free(new);
		return (NULL);
	}

	new->age = age;
	new->owner = malloc(strlen(owner) + 1);
	strcpy(new->owner, owner);

	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	return (new);

