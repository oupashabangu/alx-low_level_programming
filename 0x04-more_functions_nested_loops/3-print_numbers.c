#include "main.h"

/**
 * print_numbers - print 0-9 and end
 *
 * Return: 0-9 and new line after
 */
void print_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
