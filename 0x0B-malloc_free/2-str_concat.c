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
	int g1 = 0, g2 = 0, r, s, t;
	char *gj;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[g1] != '\0')
		g1++;
	while (s2[g2] != '\0')
		g2++;
	g2++;
	r = g1 + g2;
	gj = malloc(sizeof(char) * r);
	if (gj == NULL)
		return (NULL);
	for (s = 0; s < g1; s++)
		gj[s] = s1[s];
	for (t = 0; t < g2; s++, t++)
		gj[s] = s2[t];
	return (gj);
}
