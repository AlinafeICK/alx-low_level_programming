#include <stdio.h>
/**
 * main - program that prints all arguments
 * it receives
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != NULL; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
