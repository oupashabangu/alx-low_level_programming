#include <stdio.h>

/**
 * main - Prints the sizesof many var types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of a char: %d byte(s)\n", (unsigned long)Sizeof(d));
	printf("Size of an int: %d byte(s)\n", (unsigned long)Sizeof(a));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)Sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)Sizeof(c));
	printf("Size of a float %d byte(s)\n", (unsigned long)Sizeof(e));
	return (0);
}
