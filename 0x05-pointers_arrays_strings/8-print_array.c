#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints number
 * of elements of an array of integers
 * @a: pointer argument/parameter
 * @n: integer variable
 * Return: number of elements of an array integer
 */

void print_array(int *a, int n)
{
	int sum;

	for (sum = 0; sum < n; sum++)
	{
		if (sum == 0)
			printf("%d", a[sum]);
		else
		{
			printf(", %d", a[sum]);
		}
	}
	printf("\n");
}
