#include "main.h"

/**
 * *string_toupper - function
 * @c: string
 * Return: string
 */

char *string_toupper(char *c)
{
	int gem = 0;

	while (c[gem])
	{
		if (c[gem] >= 'a' && c[gem] <= 'z')
			c[gem] -= 32;
		gem++;
	}
	return (c);
}
