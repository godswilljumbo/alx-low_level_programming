#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - Function
 * @s1: string one
 * @s2: string two
 * Return: Concatenated string pointer
 */
char *str_concat(char *s1, char *s2)
{
	int g = 0, j = 0;
	char *gj;

	while (s1 && *s1++)
		g++;
	while (s2 && *s2++)
		j++;
	gj = malloc(sizeof(char) * (g + j + 1));
	if (!gj)
		return (NULL);
	gj += g + j;
	*gj = '\0';
	for (; s2--; j++)
		*--gj = *--s2;
	for (; s1--; g++)
		*--gj = *--s1;
	return (gj);
}
