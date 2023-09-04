#include "main.h"
/**
 * print_rev - a function that prints a string
 * in reverse.
 * @s: Parameter of function
 * Return: reversed string
 */
void print_rev(char *s)
{
	int len, x, rev;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	rev = len;
	for (x = rev - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
