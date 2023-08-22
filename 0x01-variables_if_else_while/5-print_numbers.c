#include <stdio.h>
/**
 * main - a program prints all single digits of base ten from zero
 * Description: A program starting from main function
 * Return: 0 (success)
 *
*/

int main(void)
{
	char nu;

	for (nu = '0'; nu <= '9'; nu++)
	{
		putchar(nu);
	}
	putchar('\n');
	return (0);
}
