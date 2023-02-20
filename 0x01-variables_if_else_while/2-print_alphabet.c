#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char ch = 'a';
	
	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	
	return (0);
}
