#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");
	printf("Age: %f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");

	if (d == NULL)
		return;
}
