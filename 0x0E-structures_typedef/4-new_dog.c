#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int j, k, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (j = 0; name[j]; j++)
		;
	j++;
	dog->name = malloc(j * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < j; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (k = 0; owner[k]; k++)
		;
	k++;
	dog->owner = malloc(k * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < k; k++)
		dog->owner[i] = owner[i];
	return (dog);
}

