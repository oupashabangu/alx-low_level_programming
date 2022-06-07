#include <stdio.h>

/**
 * main - Print the alphabet in lowercase followed by new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
