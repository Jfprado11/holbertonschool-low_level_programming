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
	int a, b, c, d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}
	for (a = 0; name[a] != '\0'; a++)
	{}
	a++;
	ndog->name = malloc(sizeof(char) * a);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (b = 0; owner[b] != '\0'; b++)
	{}
	b++;
	ndog->owner = malloc(sizeof(char) * b);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (c = 0; c < a; a++)
	{
		ndog->name[c] = name[c];
	}
	ndog->age = age;
	for (d = 0; d < b; b++)
	{
	ndog->owner[d] = owner[d];
	}
	return (ndog);
}
