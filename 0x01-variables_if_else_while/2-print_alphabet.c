#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
 *
*/

int main(void)
{
	int alphabet = 97;

	while (alphabet <= 122)
	{
		putchar(alphabet);
	++alphabet;
	}
	putchar('\n');
	return (0);

}
