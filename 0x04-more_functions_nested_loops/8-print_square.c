#include "main.h"
/**
 * print_square - function that prints a square
 * followed by a new line.
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < (size - 1); column++)
				_putchar('#');
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
