#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: number of arguments
 * @argv: string with arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	(void)argv;
	if (argc == 3)
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
	}
	else
	{
		puts("Error");
	}
	return (0);
}
