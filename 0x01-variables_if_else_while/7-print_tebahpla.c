#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	char text;

	for (text = 'z'; text >= 'a'; text--)
		putchar(text);
	putchar('\n');
	return (0);
}
