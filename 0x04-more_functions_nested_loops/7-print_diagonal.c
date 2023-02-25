#include "main.h"

/**
 * print_diagonal - draw a diagonal line n times \.
 * @n: number of times \ should be printed
 */
void print_diagonal(int n)
{
	int i;
	int j = n;

	if (n > 0)
	{
		for (; n > 0; n--)
		{
			for (i = 0; i < j - n; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
