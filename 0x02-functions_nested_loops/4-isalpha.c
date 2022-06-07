#include "main.h"

/**
 * _isalpha - function to check if c  is a letter, lowercase or uppercase
 *
 * @c: is the intthat will use for argument of the function
 *
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	
	else
		return (0);
}
