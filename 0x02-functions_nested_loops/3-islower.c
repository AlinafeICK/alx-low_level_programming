#include "main.h"
/**
 * _islower - a function that checks for lowercase
 * characters.
 * @c: the character to be checked
 * Return: 1 for lowercase c 0 for other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
