#include "main.h"
/**
 * swap_int - a function that swaps values of
 * two integers.
 * @a: swap integer
 * @b: Swap integer
 * Return: swap values
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
