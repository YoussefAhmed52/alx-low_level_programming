#include "dog.h"
/**
 * init_dog - initialize a dog
 * @owner: dog owner
 * @age: dog age
 * @name: dog name
 * @d: dog struct
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
