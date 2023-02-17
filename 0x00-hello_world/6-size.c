#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int is: %2d bytes \n", sizeof(int));
	printf("Size of float is: %2d bytes \n", sizeof(float));
	printf("Size of double is: %2d bytes \n", sizeof(double));
	printf("Size of char is: %2d bytes \n", sizeof(char));
	printf("Size of long int is: %2d bytes \n", sizeof(long int));
	printf("Size of long long int is: %2d bytes \n", sizeof(long long int));
	return (0);
}
