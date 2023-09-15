#include <stdio.h>
/**
 * main - a function that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		return (1);
	}
	return (0);
}
