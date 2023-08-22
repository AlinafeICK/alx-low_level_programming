#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; 1 <= '9'; i++)
	{
		putchar(i);
	}

	for (i = 'a'; 1 <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
