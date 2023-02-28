#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string input
 */
void puts2(char *str)
{
	int len, i;

	for (len = 0; *str; len++)
		str++;

	str = str - len;

	for (i = 0; i < len; i += 2)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
