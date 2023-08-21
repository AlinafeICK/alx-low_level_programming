#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
 *
*/

int main(void)
{
	int alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)

		putchar(alphabet);
		putchar('\n');
		return (0);
}
