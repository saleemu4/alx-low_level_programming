#include "main.h"

/**
 * _strcpy - copies string pointed by src, including null byte (\0)
 * to buffer pointed by dest
 * @dest: destination
 * @src: source
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	return (dest);
}
