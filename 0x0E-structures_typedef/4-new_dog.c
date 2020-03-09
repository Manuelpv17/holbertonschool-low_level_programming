#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog (struct dog)
 * @name: name of the new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(strlen(name));
	newDog->owner = malloc(strlen(owner));
	
	for(i = 0; name[i] != '\0'; i++)
		newDog->name[i] = name[i];
	newDog->name[i] = '\0';

	for(i = 0; owner[i] != '\0'; i++)
		newDog->owner[i] = owner[i];
	newDog->owner[i] = '\0';

	newDog->age = age;

	return (newDog);
}
