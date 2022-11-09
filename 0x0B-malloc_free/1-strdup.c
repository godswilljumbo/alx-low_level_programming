#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Function
 * @str: string
 * Return: string pointer
 */

char *_strdup(char *str)
{
	int g = 0;
	char *j;

	if (str == NULL)
		return (NULL);
	while (*str++)
		g++;
	j = malloc(sizeof(char) * (g + 1));
	if (!j)
		return (NULL);
	for (g++; g--;)
		j[g] = *--str;
	return (j);
}
