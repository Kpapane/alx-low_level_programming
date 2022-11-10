#include <stdio.h>

/**
 * main - entry
 * @argc: number of arguments
 * @argv: string with arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	(void)argv;
	if (argc > 1)
	{
		for (a = 0; a < argc; a++)
			;
		printf("%d\n", a - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
