#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: unsigned integer parameter
 * Return: memory using malloc
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
