#include "main.h"
/**
 * _isupper - a function that checks for uppercase
 * characters.
 * @c: variable to be checked
 * Return: 1 is c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
