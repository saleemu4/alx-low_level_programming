#include "main.h"

/**
 * print_diagonal - draw a diagonal line n times \.
 * @n: number of times \ should be printed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		_putchar('\\');
		_putchar('\n');

		for (i = 2; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			{
				_putchar(' ');

				if (j == i){
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
