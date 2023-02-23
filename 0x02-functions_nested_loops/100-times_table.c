#include "main.h"

/**
 *  times_table - print the n times table
 *  starting with 0.
 *  @n: n times table
 */
void print_times_table(int n)
{
	int i, j;

	if (!(n > 15 || n < 0))
	{

		for (i = 0; i <= n; i++)
		{

			for (j = 0; j <= n; j++)
			{
				if ((i * j) > 9)
					_putchar(((i * j) / 10) + '0');
				else if (j != 0)
					_putchar(' ');

				_putchar('0' + ((i * j) % 10));

				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
