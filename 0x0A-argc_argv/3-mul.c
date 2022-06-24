#include <stdio.h>
#include "stdlib.h"

/**
 * main - function that multiplies two integers
 * @argc: argument count
 * @argv: argument vector
 * atoi - converts string to integer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);

	return (0);
}
