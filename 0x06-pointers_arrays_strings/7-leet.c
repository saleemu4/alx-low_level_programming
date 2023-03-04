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
	char ch[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	i = 0;
	j = 0;
	while (s[i])
	{
		while (j < 8)
		{
			if (s[i] == ch[j] || (s[i] - 32) == ch[j])
			{
				s[i] = j + '0';
			}
			j++;
		}
		i++;
	}
	return (s);
}
