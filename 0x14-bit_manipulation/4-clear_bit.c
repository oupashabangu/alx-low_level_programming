#include "main.h"

/**
 * clear_bit - set the value of a bit
 * @n: pointer of unsigned int
 * @index: index of a bit
 *
 * Return: 1 if success and -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;
	return (1);
}
