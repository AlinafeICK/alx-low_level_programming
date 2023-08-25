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
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
	return (0);
}
