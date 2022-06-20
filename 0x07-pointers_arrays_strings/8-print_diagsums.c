#include "main.h"
#include <stdio.h>

/**
 * print_diagsum - function that prints the sum of two diagonals
 * @a: integer array
 * @size: size of array
 *
 * Return: void
 */
void print_diagsum(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}

