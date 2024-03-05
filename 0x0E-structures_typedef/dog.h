#ifndef _MAIN
#define _MAIN

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a new type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
