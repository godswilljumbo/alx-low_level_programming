#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - function
 * @b: memory
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	int *op;

	op = malloc(b);
	if (op == NULL)
		exit(98);
	return (op);
}
