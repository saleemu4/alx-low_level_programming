#include <stdio.h>

/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long i;
	long num = 612852475143;
	
	i = 2;
	while (i < (num / 2))
	{
		if (num % i == 0)
			num /= i;
	}
	printf("%ld\n", i);
	return (0);
}
