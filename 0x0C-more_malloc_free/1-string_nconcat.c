#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string input
 * @s2: string input
 * @n: unsigned int parameter
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2;
	unsigned int result_len;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = strlen(s1);
	length2 = strlen(s2);

	if (n >= length2)
	{
		n = length2;
	}
	result_len = length1 + n;

	concatenated = (char *)malloc(result_len + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}
	memcpy(concatenated, s1, length1);
	memcpy(concatenated + length1, s2, n);
	concatenated[result_len] = '\0';
	return (concatenated);
}
