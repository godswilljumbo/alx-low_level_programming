#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: string
 * @s2: string
 * @n: number
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int h, e, x;
	char *s;

	if (s1 == NULL)
		s1 = 0;
	else
	{
		for (h = 0; s1[h]; h++)
			;
	}
	if (s2 == NULL)
		s2 = 0;
	else
	{
		for (e = 0; s2[e]; e++)
			;
	}
	if (e > n)
		e++;
	s = malloc(sizeof(char) * (h + e + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < h; x++)
		s[h] = s1[x];
	for (x = 0; x < e; x++)
		s[x + h] = s2[x];
	s[h + e] = '\0';
	return (s);
}
