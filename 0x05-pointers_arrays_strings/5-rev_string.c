#include "main.h"

/**
 * rev_string - reversees a string
 * @s: string input
 */
void rev_string(char *s)
{
	int len, i, temp, mlen;

	for (len = 0; *s; len++)
		s++;

	s = s - len;
	mlen = len - 1;
	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[mlen];
		s[mlen--] = temp;
	}
}
