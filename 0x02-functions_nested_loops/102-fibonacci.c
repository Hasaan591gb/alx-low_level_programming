#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: print first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, num1, num2;

	num1 = 1;
	num2 = 2;
	printf("%d, ", num1);
	printf("%d, ", num2);
	for (i = 0; i < 48; i++)
	{
		num2 = num1 + num2;
		num1 = num2 - num1;
		if (i != 47)
			printf("%d, ", num2);
		else
			printf("%d\n", num2);
	}
	return (0);
}
