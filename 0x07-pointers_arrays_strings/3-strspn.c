#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: prefix
 *
 * Return: the number of bytes in the initial segment of s
 * which consist on of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *acpt = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = acpt;
	}

	return (i);
}
