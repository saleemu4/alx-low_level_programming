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
	int i, len;

	len = 0;
	for (i = 0; dest[i]; i++)
		len++;

	for (i = 0; src[i]; i++)
	{
		dest[len] = src[i];
		len++;
	}

	return (dest);
}
