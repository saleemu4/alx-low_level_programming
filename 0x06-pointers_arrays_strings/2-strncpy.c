#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: pointer to the string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *temp = dest;

	i = 0;
	while (*src && (n > i))
	{
		*dest++ = *src++;
		i++;
	}
	*dest = 0;
	return (temp);
}
