#include "main.h"
/**
 * print_alphabet_x10 - prints 10x letters
 */
void print_alphabet_x10(void)
{
	char alpha;

	int count = 0;

	while (count++ < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		count++;
		_putchar('\n');
	}
}
