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
	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
