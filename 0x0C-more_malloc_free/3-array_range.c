#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: int parameter
 * @max: int parameter
 * Return: an array of integers
 */
int *array_range(int min, int max)
{
	int num_elements, i, *arr;

	if (min > max)
	{
		return (NULL);
	}
	num_elements = max - min + 1;
	arr = (int *)malloc(num_elements * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < num_elements; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
