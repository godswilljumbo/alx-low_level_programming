#include "main.h"
/**
 * reverse_array - function
 * @a: array of integers
 * @n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int gem, fred;

	for (fred = n - 1; fred >= n / 2; fred--)
	{
		gem = a[n - 1 - fred];
		a[n - 1 - fred] = a[fred];
		a[fred] = gem;
	}
}
