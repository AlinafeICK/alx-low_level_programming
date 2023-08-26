#include "main.h"
/**
 * print_last_digit - a function that prints
 * the last digit of a number
 * @n: the variable that prints last digit
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int lastDig;

	lastDig = n % 10;
	if (lastDig < 0)
	{
		lastDig = lastDig * -1;
	}
	_putchar(lastDig + '0');
	return (lastDig);
}
