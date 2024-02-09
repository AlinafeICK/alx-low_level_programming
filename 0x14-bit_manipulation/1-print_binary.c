#include "main.h"

/**
* print_binary - function that prints the binary representation of a number
* @n: Number to print in binary
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 0)
		{
			mask = mask >> 1;
			continue;
		}
		else if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else
			_putchar('0');
		mask = mask >> 1;
	}
}

