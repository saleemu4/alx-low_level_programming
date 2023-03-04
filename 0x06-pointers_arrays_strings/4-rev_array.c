#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: input array of integers
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, temp, nn;

	nn = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[nn];
		a[nn--] = temp;
	}
}
