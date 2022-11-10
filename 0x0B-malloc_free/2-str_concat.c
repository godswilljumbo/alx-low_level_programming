#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - Function
 * @s1: string one
 * @s2: string two
 * Return: Concatenated string pointer
 */
char *str_concat(char *s1, char *s2)
{
	int g1 = 0, g2 = 0;
	char *gj;

	while (s1 && *s1++)
		g1++;
	while (s2 && *s2++)
		g2++;
	gj = malloc(sizeof(char) * (g1 + g2 + 1));
	if (!gj)
		return (NULL);
	gj += g1 + g2;
	*gj = '\0';
	for (s2--; g2++;)
		*--gj = *--s2;
	for (s1--; g1++;)
		*--gj = *--s1;
	return (gj);
}
