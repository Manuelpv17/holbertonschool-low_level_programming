#include "dog.h"

/**
 * init_dog -initialize a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: Pointer to string
 * @age: age of dog
 * @owner: Owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
