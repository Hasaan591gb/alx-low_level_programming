#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: prints largest prime factor of a number
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long number;
	unsigned int n, flag;

	flag = 1;
	number = 612852475143;
	for (n = 2; n <= number && flag; n++)
	{
		while ((number % n) == 0 && flag)
		{
			if (number == n)
			{
				printf("%d\n", n);
				flag = 0;
			}
			number /= n;
		}
	}
	return (0);
}
