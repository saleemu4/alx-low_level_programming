#include "main.h"

/**
 * _ialpha- checks for alphabetic character
 * @c: character to be check
 * Return: 1 if c is letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
