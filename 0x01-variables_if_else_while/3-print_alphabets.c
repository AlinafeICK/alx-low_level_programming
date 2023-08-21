#include <stdio.h>

/**
 * main - A program that prints the alphabet in lower & uppercase
 *
 * Return: 0 (success)
 *
*/

int main(void)
{
	int alphabet = 97;
	int ALPHABET = 65;

	while (alphabet <= 122)
	{
		putchar(alphabet);
	++alphabet;
	}
	while (ALPHABET <= 90)
	{
		putchar(ALPHABET);
		++ALPHABET;
	}
	putchar('\n');
	return (0);

}
