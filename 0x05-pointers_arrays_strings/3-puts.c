#include "main.h"

/**
 * _puts - prints a string to stdout
 * @s: string input
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str; i++)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
