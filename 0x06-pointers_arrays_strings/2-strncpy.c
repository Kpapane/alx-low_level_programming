#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		if (a < n)
		{
			dest[a] = src[a];
		}
	while (a < n)
		dest[a++] = '\0';

	return (dest);
}
