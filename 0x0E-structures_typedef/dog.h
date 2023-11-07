#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog (string).
 * @age: The age of the dog in years (float).
 * @owner: The name of the dog's owner (string).
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);

#endif
