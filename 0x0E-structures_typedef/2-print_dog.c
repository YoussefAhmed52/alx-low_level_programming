#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints nil if NULL
 * @d: dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	else if (name == NULL)
		printf("name: nil");
	else if (owner == NULL)
		printf("owner: nil");
	else if (age == NULL)
		printf("age: nil");
}
