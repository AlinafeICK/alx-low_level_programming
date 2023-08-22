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

	for (sn = 0; sn <= 9; sn++)
	{
		putchar(sn + 48);
	}
	putchar('\n');
	return (0);
}
