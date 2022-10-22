#include "main.h"

/**
 * _islower - checking for lowercase alphabets only.
 * Return: 1 if lowercase alphabet, 0 if not a lowercase alphabet.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
