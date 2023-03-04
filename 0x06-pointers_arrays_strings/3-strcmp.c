#include "main.h"

/**
 * _strcmp - copares two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: 0 if s1 == s2, positive diff. of chars unmatched if s1>s2
 * neagetiv diff. of chars unmatched if s1<s2
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	result = *s1 - *s2;

	return (result);
}
