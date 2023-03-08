#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: input string
 * @c: character to locate
 *
 * Return: a pointer to the first occurance of the character c in string s
 * otherwise NULL if c is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return ('\0');
}
