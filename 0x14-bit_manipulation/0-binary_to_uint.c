#include "main.h"

/**
* binary_to_uint - a function that converts a binary number to an unsigned int
* @b: parameter pointing to string 0 and 1 chars
*
* Return: converted binary number to unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
