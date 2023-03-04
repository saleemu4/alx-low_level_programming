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
	char ch[] = "ol_ea__t";

	i = 0;
	j = 0;
	while (s[i])
	{
		while (ch[j])
		{
			if (s[i] == ch[j] || s[i] == (ch[j] -32))
			{
				s[i] = j + '0';
			}
			j++;
		}
		i++;
	}
	return (s);
}
