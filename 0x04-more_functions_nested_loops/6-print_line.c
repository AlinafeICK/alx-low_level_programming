#include "main.h"
/**
 * print_line - function that draws a straight line
 * in the terminal
 * @n: variable that presents number of times
 * the character _ should be printed.
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
