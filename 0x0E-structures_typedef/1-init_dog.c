#include "dog.h"

/**
 * init_dog - initializes a structure of type dog
 * @dg: pointer to structure
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *dg, char *name, float age, char *owner)
{
	if (dg)
	{
		dg->name = name;
		dg->age = age;
		dg->owner = owner;
	}
}
