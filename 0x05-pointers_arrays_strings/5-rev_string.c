#include "main.h"

/**
 * rev_string - function
 * @s: string
 */

void rev_string(char *s)
{
	int g = 0;
	int j = 0;
	char gj;

	while (*(s + g) != '\0')
		g += 1;
	g -= 1;
	while (j < g)
	{
		gj = s[g];
		s[g] = s[j];
		s[j] = gj;
		j++;
		g--;
	}
}
