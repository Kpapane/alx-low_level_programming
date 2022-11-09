#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: NULL if str = NULL, returns a pointer
 */

char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int a;
	int b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b] != '\0'; b++)
		strnew = (char *)malloc(b + 2 * sizeof(char));
	if (strnew != NULL)
	{
		for (a = 0; str[a] != '\0'; a++)
			strnew[a] = str[a];
	}
	else
	{
		return (NULL);
	}
	strnew[a] = '\0';
	return (strnew);
}
