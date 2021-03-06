#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t;
	int i = 0;

	t = n ^ m;

	while (t >= 1)
	{
		if ((t & 1) == 1)
			i++;
		t >>= 1;
	}
	return (i);
}
