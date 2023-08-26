#include "main.h"
/**
 * _abs - a function that computes the absolute value
 * of an integer
 * @n: the value to be computed.
 * Return: 0 or a + number
 */
int _abs(int n)
{

	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
