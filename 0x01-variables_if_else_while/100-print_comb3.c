#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: Print all possible combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10 && m != n; m++)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (n == 8 && m == 9)
				break
			putchr(',');
			putchr(' ');
		}
	}
	return (0);
}
