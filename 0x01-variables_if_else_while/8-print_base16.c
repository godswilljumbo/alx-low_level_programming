#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char text;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (text = 'a'; text <= 'f'; text++)
		putchar(text);
	putchar('\n');
	return (0);
}
