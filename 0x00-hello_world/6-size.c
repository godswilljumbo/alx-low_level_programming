#include <stdio.h>

/**
 * main - Entey point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int lb;
	long long llb;
	float c;

	printf("Size of a char: %zu of byte(s)\n", sizeof(a));
	printf("Size of an int: %zu of byte(s)\n", sizeof(b));
	printf("Size of a long int: %zu of byte(s)\n", sizeof(lb));
	printf("Size of a long long: %zu of byte(s)\n", sizeof(llb));
	printf("Size of a float: %zu of byte(s)\n", sizeof(c));
	return (0);
}
