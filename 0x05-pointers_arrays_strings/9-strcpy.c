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
	char *temp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = 0;

	return (temp);
}
