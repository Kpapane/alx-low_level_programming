#include <stdio.h>
#include <time.h>
#include <stdlib>
/**
 * main - assign a random number tells if it's negative or positive
 *
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
		printf("%d is positive\n", n);
	else if (n<0)
		printf("%d is negativ\n", n);
	else 
		printf("%d is zero\n", n);
	return (0);
}
