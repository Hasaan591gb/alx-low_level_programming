#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: Prints sum of even valued terms of Fibonacci sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1, num2, sum;
	int i;

	sum = 0;
	num1 = 1;
	num2 = 2;
	for (i = 0; num2 < 4000000; i++)
	{
		if ((num2 % 2) == 0)
			sum += num2;
		num2 = num1 + num2;
		num1 = num2 - num1;
	}
	printf("%ld\n", sum);
	return (0);
}
