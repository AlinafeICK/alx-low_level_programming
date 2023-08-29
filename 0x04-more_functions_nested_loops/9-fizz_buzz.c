#include <stdio.h>
/**
 * main - program that prints numbers 1 to 100, but Fizz
 * for multiples of three, Buzz multiples of five and
 * FizzBuzz for numbers which are multiples of both
 * three and five.
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	while (i++ < 100)
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
		{
			if (i != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
			printf("%d ", i);
	printf("\n");
	return (0);
}
