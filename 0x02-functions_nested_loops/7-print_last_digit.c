#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: interger to get last digit
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int n;

	if (n < 0)
		n = -1 * (n % 10);
	else
		n = r % 10;

	_putchar ((n % 10) + '0');

	return (n % 10);
}
