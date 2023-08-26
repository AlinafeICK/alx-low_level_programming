#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic
 * character
 * @c: the variable to be checked
 * Return: 1 if letter is lower or uppercase else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
