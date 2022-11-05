#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function
 * @argc: number character
 * @argv: character of array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int g, s, posi = 0;

	for (g = 1; g < argc; g++)
	{
		for (s = 0; argv[g][s] != '\0'; s++)
		{
			if (!isdigit(argv[g][s]))
			{
				printf("Error\n");
				return (1);
			}
		}
		posi += atoi(argv[g]);
	}
	printf("%d\n", posi);
	return (0);
}
