#include<stdio.h>
/*
 * main - a program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 value
 * 
 */
int main(void)
{
	printf("Size of a Char: %d bytes(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
