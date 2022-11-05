#include <stdio.h>

/**
 * main - function
 * @argc: Number of character
 * @argv: character of array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int gs;

	for (gs = 0; gs < argc; gs++)
	{
		printf("%s\n", argv[gs]);
	}
	return (0);
}
