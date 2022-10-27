#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * main - function
 *
 * Return: Always 0
 */

int main(void)
{
	int g = 0;

	int randomizer = 0;

	srand((unsigned int) (time(NULL)));

	char numbers[] = "0123456789";

	char letter[] = "abcdefghijklmnopqrstuvwxyz";

	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char symbols[] = "?!&%*@$^";

	char password[12];

	randomizer = rand () % 4;

	for (g = 0; g < 12; g++)
	{
		if (randomizer == 1)
		{
			password[g] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[g]);
		}
		else if (randomizer == 2)
		{
			password[g] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[g]);
		}
		else if (randomizer == 3)
		{
			password[g] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[g]);
		}
		else
		{
			password[g] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[g]);
		}
	}
	return (0);
}
