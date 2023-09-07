#include "main.h"
/**
 * _strcpy - a function that copies the string pointed
 * to by src, included a terminating null byte,
 * to the buffer pointed to by dest.
 * @dest: pointer parameter
 * @src: pointer parameter
 * Return: copies the string pointers
 */

char *_strcpy(char *dest, char *src)
{
	int x, y;

	x = 0;

	while (src[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	return (dest);
}
