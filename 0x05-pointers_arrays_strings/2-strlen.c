#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input
 * Return: length of a string
 */

int _strlen(char *s)
{
	int a = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
