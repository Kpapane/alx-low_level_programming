#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: single inpuut
 * Return: 1 for letter, otherwise 0
 */
int _isalpha(int c)
{
	if  (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
