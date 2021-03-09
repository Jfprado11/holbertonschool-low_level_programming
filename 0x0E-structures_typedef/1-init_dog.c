#include "dog.h"

/**
 *innit_dog - initializate the variable
 *@d: structure name
 *@name: name of dog
 *@age: age of the dog
 *@owner: owner of dog
 *
 *Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
