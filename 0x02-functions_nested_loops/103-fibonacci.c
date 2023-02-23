#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 * Return: Always 0.
 */
int main(void)
{
	long int sum = 0;
	long int n1 = 0;
	long int n2 = 1;
	long int n3;

	for (;;)
	{
		n3 =  n2 + n1;

		if (n3 > 4000000)
			break;

		if (n3 % 2 == 0)
			sum += n3;

		n1 = n2;
		n2 = n3;
	}

	printf("%li\n", sum);
	return (0);
}
