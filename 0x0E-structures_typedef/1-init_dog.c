#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialises a variable of type struct dog
 * @d: name of the structure variable
 * @name: name member
 * @age: age member of the structure
 * @owner: owner member
 *
 * Return: (0)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;

}
