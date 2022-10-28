#include "main.h"

/**
 * _strcmp - Function for comparism
 * @s1: string
 * @s2: string
 * Return: negative if s1<s2, 0 if matches, positive if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int w;

	for (w = 0; s1[w] != '\0' || s2[w] != '\0'; w++)
	{
		if (s1[w] != s2[w])
			return (s1[w] - s2[w]);
	}
	return (0);
}
