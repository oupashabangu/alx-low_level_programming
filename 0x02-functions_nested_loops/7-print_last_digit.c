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
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
