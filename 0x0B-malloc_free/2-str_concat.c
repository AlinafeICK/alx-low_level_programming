#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
