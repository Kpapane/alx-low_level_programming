#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer
 * @src: pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
