#include "main.h"
/**
 * rev_string - a function to reverse a string
 * @s: parameter pointer
 * Return: a reverse string
 */
void rev_string(char *s)
{
	char container;
	int a, b, c;

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;
	for (c = 0; c < a / 2; c++)
	{
		container = s[c];
		s[c] = s[b];
		s[b--] = container;
	}
}
