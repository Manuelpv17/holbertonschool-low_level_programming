#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog (struct dog)
 * @name: name of the new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}
