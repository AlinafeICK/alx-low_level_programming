#include "main.h"
int _strlenRecursion(char *length);
int palindrome(char *chk, int str, int end);
/**
 * is_palindrome - a function that returns 1 if a
 * string is a palindrome and 0 if not
 * @s: character parameter
 * Return: 1 if string else 0
 *
 */
int is_palindrome(char *s)
{
	int a;

	a = _strlenRecursion(s);
	if (a == 0)
		return (1);
	return (palindrome(s, 0, a - 1));
}

/**
 * _strlenRecursion - Function that checks if a string is
 * a palindrome
 * @length: string parameter
 * Return: 1 if string is a palindrome else 0
 */
int _strlenRecursion(char *length)
{
	if (*length == '\0')
		return (0);
	length++;
	return (_strlenRecursion(length) + 1);
}

/**
 * palindrome - function to check if string is palindrome
 * @chk: char parameter for review
 * @str: int parameter
 * @end: int parameter
 * Return: 1 or else 0
 */
int palindrome(char *chk, int str, int end)
{
	if (chk[str] != chk[end])
		return (0);
	if (str < end + 1)
		return (palindrome(chk, str + 1, end - 1));
	return (1);
}
