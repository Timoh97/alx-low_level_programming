#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_tim *new_dog(char *name, float age, char *owner)
{
	unsigned int k, l, m;
	dog_tim *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_tim));
	if (dog == NULL)
		return (NULL);
	for (k = 0; name[k]; k++)
		;
	k++;
	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (m = 0; m < k; m++)
		dog->name[m] = name[m];
	dog->age = age;
	for (l = 0; owner[l]; l++)
		;
	l++;
	dog->owner = malloc(l * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (m = 0; m < l; m++)
		dog->owner[m] = owner[m];
	return (dog);
}
