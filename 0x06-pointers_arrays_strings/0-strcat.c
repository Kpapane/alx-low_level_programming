#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = b = 0;
	while (*(dest + a))
		a++;
	while ((*(dest + a) = *(src + b)))
	{
		a++;
		b++;
	}
	return (dest);
}
