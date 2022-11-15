#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("nil\n");
	if (d->owner == NULL)
		printf("nil\n");
	else 
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	if (d == NULL)
		return;
}
