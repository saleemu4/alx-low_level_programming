#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to be located
 *
 * Return: a pointer to the begining of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *res = haystack;
	char *str = needle;

	while (*haystack)
	{
		while (*needle)
			if (*haystack++ != *needle++)
				break;

		if (!*needle)
			return (res);

		needle = str;
		res++;
		haystack = res;
	}

	return (0);
}
