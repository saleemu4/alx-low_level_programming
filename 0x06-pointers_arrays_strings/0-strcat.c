#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the string @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	i = 0;
	while (dest[i])
	{
		len++;
		i++;
	}

	i = 0;
	while (src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	return dest;
}
