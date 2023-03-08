#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a char
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *ms = s;

	while (i < n)
	{
		ms[i] = b;
		i++;
	}

	return (ms);
}
