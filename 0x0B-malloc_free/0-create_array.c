#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: arrays
 * @c: char
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int a;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (a = 0; a < size; a++)
				array[i] = c;
		}
	}
	return (array);
}
