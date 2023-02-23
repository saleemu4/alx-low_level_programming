#include "main.h"

/**
 * print_alphabet - print lowercase alphabets
 */
void print_alphabet(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
