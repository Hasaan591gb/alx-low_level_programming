#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: print first 98 numbers of fibonacci sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int num1, num2;
	int i;

	num1 = 1;
	num2 = 2;
	printf("%lu, ", num1);
	printf("%lu, ", num2);
	for (i = 0; i < 96; i++)
	{
		num2 = num1 + num2;
		num1 = num2 - num1;
		if (i != 95)
			printf("%lu, ", num2);
		else
			printf("%lu\n", num2);
	}
	return (0);
}
