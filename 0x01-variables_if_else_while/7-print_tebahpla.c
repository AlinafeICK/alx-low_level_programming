#include <stdio.h>
/**
 * main - a program that prints in reverse alphabet
 * Description: Using putchar and main function
 * Return: 0 (success)
**/
int main(void)
{
	int n;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
