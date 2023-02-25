#include "main.h"

/**
 * print_line - draw a straight line n times _.
 * @n: number of times _ should be printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{	
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
