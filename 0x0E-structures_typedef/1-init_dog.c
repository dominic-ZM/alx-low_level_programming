#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the struct to be initialized
 * @name: the value to set to d's name field
 * @age: the value to set to d's age field
 * @owner: the value to set to d's owner field
 *
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
