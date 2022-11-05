#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: number character
 * @argv: character of array
 * Return: 0 if two arguments.
 * Error if not two arguments, and return 1.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
