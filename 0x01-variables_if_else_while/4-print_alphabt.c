#include <stdio.h>

/**
 * main - a program printing the alphabet except e and q
 *
 * Description: the program is using ASCII character format
 * for char representation
 *
 * Return: 0 (success)
 *
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
