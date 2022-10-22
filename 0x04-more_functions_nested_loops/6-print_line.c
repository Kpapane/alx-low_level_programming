#include "main.h"
/**
 * print_line - prints a line
 * @n: number of times
 * Return: void
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
