#include "main.h"
#include <string.h>

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory that contains a copy of
 * the string given as a parameter
 *
 * @str: String parameter
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	size_t len;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	duplicate = (char *)malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}

