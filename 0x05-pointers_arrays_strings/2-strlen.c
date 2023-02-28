#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string input
 *
 * Return: return length of @s
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s; len++)
		s++;

	return (len);
}
