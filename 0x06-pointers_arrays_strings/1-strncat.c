#include "main.h"
#include <stdio.h>
/**
 * *_strcat - function
 * @dest: a pointer
 * @src: a pointer
 * @n: int variable
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; *dest != 0; x++)
		dest++;
	for (y = 0; y < n && src[y] != 0; y++)
	{
		*dest = src[y];
		dest++;
	}
	*dest = '\0';
	dest -= (x + y);
	return (dest);
}
