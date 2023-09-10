#include "main.h"
/**
 * factorial - a function that returns the
 * factorial of a given number.
 * @n: integer variable to be computed
 * Return: factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1) * n);
	}
}
