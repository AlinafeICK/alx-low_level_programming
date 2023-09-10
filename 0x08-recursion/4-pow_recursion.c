#include "main.h"
/**
 * _pow_recursion - a function that returns the value
 * of x raised to the power of y.
 * @x: variable parameter
 * @y: variable parameter
 * Return: raised value
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
		--y;
	return (_pow_recursion(x, y) * x);
}
