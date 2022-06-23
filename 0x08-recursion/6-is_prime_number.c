#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - return 1 if input integer is prime number
 * @n: number
 *
 * Return: 1 if input integer is prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if n is prime number
 * @n: number
 * @i: iterator
 *
 * Return: 1 if n is prime
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
