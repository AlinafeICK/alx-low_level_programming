#include "main.h"
/**
 * _print_rev_recursion - a function that
 * prints a string in reverse
 * @s: reference argument pointer
 * Return: prints string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
