#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i, caps = 1;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && caps)
			s[i] = s[i] - ('a' - 'A');

		caps = (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' ||
                            s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
                            s[i] == ')' || s[i] == '{' || s[i] == '}');
		i++;
	}
	return (s);
}
