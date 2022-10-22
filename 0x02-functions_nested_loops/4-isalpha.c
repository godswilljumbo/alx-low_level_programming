#include "main.h"

/**
 * _isalpha - check for both lower and upper alphabets
 * @c: character to check
 * Return: 1 if c is a letter, lowercase or uppercase. Otherwise return 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
