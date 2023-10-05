#include "main.h"

/**
 * create_array - a function that creates an array of
 * chars and initializes it with a specific char.
 * @size: integer representing size
 * @c: char parameter used to create array
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
