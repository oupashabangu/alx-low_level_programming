#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: charecter to be checked for digit membership
 *
 * Return: 1 if digit, o if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
