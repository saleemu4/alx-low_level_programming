#include "main.h"

/**
 * puts_half - print the second half of a string.
 * If the number of characters is odd, print last n characters
 * @str: string input
 */
void puts_half(char *str)
{
	int len, i, n;

	for (len = 0; *str; len++)
		str++;

	str = str - len;

	if ((len % 2) == 0)
	{
		n = len / 2;
		for (i = n; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
