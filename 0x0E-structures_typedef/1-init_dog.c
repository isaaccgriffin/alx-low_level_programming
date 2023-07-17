#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a dog structure
 * @d: a dog stucture
 * @name: name to the dog
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
