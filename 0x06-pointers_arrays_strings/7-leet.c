#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: input string
 *
 * Return: pointer to the resulting string
 */
char *leet(char *s)
{
	int i, j;
	char ch[] = "OL?EA??T";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (s[i] == ch[j] || (s[i] - 32) == ch[j])
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
