#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function
 * @nmemb: number of item
 * @size: size of item
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int g;
	char *lit;

	if (nmemb == 0 || size == 0)
		return (NULL);
	lit = malloc(nmemb * size);
	if (lit == NULL)
		return (NULL);
	for (g = 0; g < nmemb * size; g++)
		lit[g] = 0;
	return (lit);
}
