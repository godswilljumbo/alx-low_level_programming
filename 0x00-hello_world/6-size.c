#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int d;
	long int ld;
	long long int lld;
	float f;
	
	printf("Size of a char: %lu of byte(s)\n", sizeof(c));
	printf("Size of an int: %lu of byte(s)\n", sizeof(d));
	printf("Size of a long int: %lu of byte(s)\n", sizeof(ld));
	printf("Size of a long long int: %lu of byte(s)\n", sizeof(lld));
	printf("Size of a float: %lu of byte(s)\n", sizeof(f));
	return (0);
}
