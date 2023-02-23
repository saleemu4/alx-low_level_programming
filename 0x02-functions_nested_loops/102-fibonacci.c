#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int n1 = 0;
	int n2 = 1;
	int n3;

	for (i = 1; i <= 50; i++)
	{
		n3 =  n2 + n1;

		printf("%d", n3);

		n1 = n2;
		n2 = n3;

		if (i != 50)
			printf(", ");

	}

	printf("\n");
	return (0);
}
