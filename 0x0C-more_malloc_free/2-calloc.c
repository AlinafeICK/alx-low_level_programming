#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 * using malloc
 * @nmemb: int parameter
 * @size: int parameter
 * Return: memory allocation using malloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr != NULL)
	{
		memset(ptr, 0, total_size);
	}
	return (ptr);
}
