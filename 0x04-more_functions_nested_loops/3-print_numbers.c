#include "main.h"
/**
 * print_numbers - function that prints from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
