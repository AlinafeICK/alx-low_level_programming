#include <stdio.h>
/**
 * main - a program that prints all combinations of single
 * digit numbers.
 * Description - Printed in ascending order, putchar (), main()
 * no variable type of char
 * Return: Always (success)
 */
int main(void)
{
	int v;

	for (v = '0'; v <= '9'; v++)
	{
		putchar(v);

		if (v != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
