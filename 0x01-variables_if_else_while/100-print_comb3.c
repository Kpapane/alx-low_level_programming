#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 7; n1++)
	{
		for (n2 = n1 +1; n2 < 10; n2; n2++)
		{
			putchar((n1 % 10) + '0');
			putchar((n2 % 10) + '0');

			if(n1 == 8 && n2 ==9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
