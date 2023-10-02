#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: a multiplied value to the stdout
 */

int main(int argc, char *argv[])
{
	int Num1, Num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	Num1 = atoi(argv[1]);
	Num2 = atoi(argv[2]);

	result = Num1 * Num2;

	printf("%d\n", result);
	return (0);
}
