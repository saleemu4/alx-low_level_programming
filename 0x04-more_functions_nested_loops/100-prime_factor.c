#include <stdio.h>

/**
 * main - Prints the largest prime factor of 612852475143
 * Return: Always 0.
 */
int main(void)
{
	long i;
	long num = 612852475143;

	i = 2;
	while (i != num)
	{
		if (num % i == 0)
			num /= i;
		else
			i++;
	}
	printf("%ld\n", num);
	return (0);
}
