#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @a: is an integer
 * Return: absolute value
 */
int _abs(int a)
{
	return (a * ((a > 0) - (a < 0)));
}
