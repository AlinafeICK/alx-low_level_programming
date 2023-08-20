#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: a Program that prints a string with
 * special characters.
 *
 * Return: a value of 1
 *
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
