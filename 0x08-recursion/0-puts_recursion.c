#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 * @s: pointer parameter
 * Return: a string to stdout
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	_putchar('\n');
	else
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
