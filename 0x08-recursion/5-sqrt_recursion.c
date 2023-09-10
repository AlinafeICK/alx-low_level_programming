#include "main.h"
int _root_sqrt(int x, int y);
/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number.
 * @n: integer variable parameter
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_root_sqrt(n, 1));
	}
}

/**
 * _root_sqrt - Function that calculate the square root
 * @x: value to calculate square root
 * @y: variable to count
 * Return: square root
 */
int _root_sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	else
	{
		return (_root_sqrt(x, y + 1));
	}
}

