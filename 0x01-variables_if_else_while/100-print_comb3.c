#include <stdio.h>
/**
 * main - a program that prints combination
 * of two digits
 * Description - separated by ,, putchar(), limited fiveX
 * main(), print only smallest combination of two digits
 * Return: 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);

				if (a != '8' || (a == '8' && b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
