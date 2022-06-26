#include "main.h"

/**
 * _isupper - checks for uppercase charecter
 * @c: charecter to be checked for case
 *
 * Return: 1 is uppercase, 0 if not uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
