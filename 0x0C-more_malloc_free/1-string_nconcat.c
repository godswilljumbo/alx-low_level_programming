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
	unsigned int h, e, x, y;
	char *lit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (h = 0; s1[h] != '\0';)
		h++;
	for (e = 0; s2[e] != '\0';)
		e++;
	lit = malloc(sizeof(char) * (h + n + 1));
	if (lit == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		lit[x] = s1[x];
	if (n < e)
	{
		for (y = 0; y < n; y++, x++)
			lit[x] = s2[y];
		lit[x] = '\0';
	}
	else
	{
		for (y = 0; s2[y] != '\0'; y++, x++)
			lit[x] = s2[y];
		lit[x] = '\0';
	}
	return (lit);
}
