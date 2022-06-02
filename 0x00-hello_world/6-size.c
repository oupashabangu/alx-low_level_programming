#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of an int: %lu byte(s)\n", (unsigned long)Sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)Sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)Sizeof(C));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)Sizeof(d));
	printf("Size of a float %lu byte(s)\n", (unsigned long)Sizeof(f));
	return (0);
}
