#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: integer
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < (n - 1); z++)
	{
		printf("%d", a[z]);
	}
	if (z == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
