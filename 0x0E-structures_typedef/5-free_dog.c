#include <stdio.h>
#include "dog.h"

/**
 *free_dog -  function that frees dogs
 *@d: structure
 *
 *Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		if (d->name != 0)
		{
			free(d->name);
		}
		if (d->owner != 0)
		{
			free(d->owner);
		}
		free(d);
	}
}
