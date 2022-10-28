#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - function
 * @dest: pointer
 * @src: pointer
 * @j: int variable
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int j)
{
	int g;

	for (g = 0; g < j && src[g] != '\0'; g++)
		dest[g] = src[g];
	for ( ; g < j; g++)
		dest[g] = '\0';
	return (dest);
}
