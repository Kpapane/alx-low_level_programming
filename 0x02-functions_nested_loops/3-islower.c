#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: single input
 * Return: 1 for lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
