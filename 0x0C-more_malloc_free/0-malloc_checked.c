#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function
 * @g: memory
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int g)
{
	void *p;

	p = malloc(g);
	if (p == NULL)
		exit(98);
	return (0);
}
