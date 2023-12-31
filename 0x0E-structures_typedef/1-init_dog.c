#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: A pointer to the struct dog to initialize
 * @name: The name to set for the dog
 * @age: The age to set for the dog
 * @owner: The owner's name to set for the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
