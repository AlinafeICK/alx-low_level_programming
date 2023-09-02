#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: string var to show length.
 * Return: return the length of a string
 */
int _strlen(char *s)
{
	int store_variable;

	store_variable = 0;
	while (s[store_variable] != '\0')
	{
		store_variable++;
	}
	return (store_variable);
}

