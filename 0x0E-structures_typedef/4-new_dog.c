#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - a function that creates a new struct
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *
 *Return: a pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (0);
	}
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	return (ndog);
}
