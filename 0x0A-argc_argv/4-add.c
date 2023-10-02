#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: added value to the stdout
 */

int main(int argc, char *argv[])
{
	int Sum, Num, i, j;

	Sum = 0;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
	Num = atoi(arg);
	Sum += Num;
	}
	printf("%d\n", Sum);
	return (0);
}
