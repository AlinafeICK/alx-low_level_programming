#include "main.h"

/**
 * print_alphabet - function that prints the alphabet
 *
 * Description - using _putchar o print lowercase alphabet
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
