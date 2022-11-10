#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array num
 * @size: size of ea array element
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
		arr[a] = 0;
	return (arr);
}
