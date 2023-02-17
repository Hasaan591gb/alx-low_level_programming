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
	int n = 0;
	int m = 0;

	while (n < 10)
	{
		m = n + 1;
		while (m < 10)
		{
			if (m == n)
			{
				m++;
				continue;
			}
			putchar(n + '0');
			putchar(m + '0');
			if (n == 8 && m == 9)
				break;
			putchar(',');
			putchar(' ');
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
