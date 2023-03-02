#include "main.h"

/**
 * _strncat - concatenates two strings
 * using atmost n bytes from @src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: pointer to the string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	for (i = 0; dest[i]; i++)
		len++;

	i = 0;
	while (src[i] && (n > i))
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	return (dest);
}
