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
		printf("%d\n", a[g]);
	}
	printf("\n");
}
