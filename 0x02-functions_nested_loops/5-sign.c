#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: character to be check
 * Return: 1 and print + if n is > 0
 * 0 and prints 0 if n is 0
 * -1 and prints - if n < 0.
 */
int print_sign(int n)
{
	if (n > 0){
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
