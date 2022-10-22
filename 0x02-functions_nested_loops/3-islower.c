#include "main.h"

/**
 * _islower - checking for lowercase alphabets only.
 * @c: character to check
 * Return: 1 if lowercase alphabet, otherwise return 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
