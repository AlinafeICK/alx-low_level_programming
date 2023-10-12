#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int _putchar(char c);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, on error -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}


/**
 * main - program to print the file name its
 * compiled from
 *
 * Return: 0 on success
 */

int main(void)
{
	const char* filename = __FILE__;
	size_t len = 0;
	size_t i;

	while (filename[len] != '\0')
	{
	len++;
	}

	for (i = 0; i < len; i++)
	{
	_putchar(filename[i]);
	}
	_putchar('\n');
	exit (0);
}
