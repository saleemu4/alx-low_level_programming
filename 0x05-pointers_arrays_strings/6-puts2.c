#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string input
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str; i += 2)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
