#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Decription: Prints a number to console
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	elif(n == 0)
		printf("%d is zero\n", n);
	elif(n < 0)
		printf("%d is negative", n);
	return (0);

}
