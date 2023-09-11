#include "main.h"
int prime_checker(int num1, int num2);
/**
 * is_prime_number - function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: integer value to be check
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int arr = 2;

	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (prime_checker(n, arr));
}

/**
 * prime_checker - function to return 1 if input is a prime
 * number.
 * @num1: parameter variable
 * @num2: parameter variable
 * Return: prime number
 */

int prime_checker(int num1, int num2)
{
	if (num1 / 2 < num2)
		return (1);
	if (num1 % num2 == 0)
		return (0);
	return (prime_checker(num1, num2 + 1));
}
