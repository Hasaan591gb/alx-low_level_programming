#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: Find summ of umbers divisible by 3 or 5 between 0 and 1023
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
