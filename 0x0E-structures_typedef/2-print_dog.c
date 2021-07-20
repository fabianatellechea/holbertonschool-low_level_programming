#include "dog.h"
#include <stdio.h>

/**
  *print_dog - function that prints a struct dog
  *@d: struct dog
  *Return: 0
  */

void print_dog(struct dog *d)
{
	if (d)
	{

	if (d->name != NULL)
		printf("Name:%s\n", d->name);
	printf("Age:%f\n", d->age);

	else
		printf("Name: (nil)\n");

	if (d->owner != NULL)
		printf("Owner:%s\n", d->owner);
	else
		printf("Owner: (nil)\n");
	}
}


