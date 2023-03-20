#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: p
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = NULL;

	p = malloc(sizeof(dog_t));

	if (p && name)
	{
		p->name = malloc(sizeof(strlen(name) + 1));
		strcpy(p->name, name);
	}
	else
	{
		free(p);
		return (NULL);
	}

	p->age = age;

	if (owner)
	{
		p->owner = malloc(strlen(owner) + 1);
		strcpy(p->owner, owner);
	}
	else
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	return (p);
}
