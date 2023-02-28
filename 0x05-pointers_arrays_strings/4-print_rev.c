#include "main.h"

/**
 * print_rev - prints a string in reverse to stdout
 * @s: string input
 */
void print_rev(char *s)
{
	int len, i;

	for (len = 0; *s; len++)
		s++;

	s = s - len;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
