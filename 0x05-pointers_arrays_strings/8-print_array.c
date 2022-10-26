#include "main.h"
#include <stdio.h>
/**
 * print_array - function
 * @a: array
 * @n: number of element
 */

void print_array(int *a, int n)
{
	int g;

	for (g = 0; g < n; g++)
	{
		if (g == 0)
			printf("%d", a[g]);
		else
			printf(", %d", a[g]);
	}
	printf("\n");
}
