#include <stdio.h>

/**
 * main - function
 * @argc: Number character
 * @argv: character of array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
