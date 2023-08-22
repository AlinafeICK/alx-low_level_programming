#include <stdio.h>
/**
 * main - a program that prints single numbers
 *
 * Description - using only putchar and in the main()
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int sn;

	do {
		putchar(sn);
		sn++;
	}
	while (sn <= 9);
	{
		putchar('\n');
	}
	return (0);
}
