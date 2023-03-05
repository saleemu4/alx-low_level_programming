#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: Always 0.
 */
int main(void)
{
	long int n1 = 0;
	long int n2 = 1;
	long int n3;
	long int i;

	for (i = 0; i <= 98; i++)
	{
		n3 =  n2 + n1;

		printf("%lu", n3);

		if (i != 98)
			printf(", ");

		n1 = n2;
		n2 = n3;
	}

	printf("\n");
	return (0);
}
