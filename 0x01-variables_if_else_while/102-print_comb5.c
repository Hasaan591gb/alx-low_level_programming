#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints in sets of four digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens_digit1, ones_digit1, tens_digit2, ones_digit2;
	tens_digit1 = ones_digit1 = tens_digit2 = ones_digit2 = 0;
	while (tens_digit1 <= 9)
	{
		while (ones_digit1 <= 9)
		{
			while (tens_digit2 <= 9)
			{
				while (ones_digit2 <= 9)
				{
					if (tens_digit1 == tens_digit2 && ones_digit1 == ones_digit2)
					{
						ones_digit2++;
						continue;
					}
					if (tens_digit1 > tens_digit2 || (tens_digit1 == tens_digit2 && ones_digit1 >= ones_digit2))
					{
						putchar(tens_digit2 + '0');
						putchar(ones_digit2 + '0');
						putchar(' ');
						putchar(tens_digit1 + '0');
						putchar(ones_digit1 + '0');
						if (!(tens_digit1 == 9 && ones_digit1 == 9 && tens_digit2 == 9 && ones_digit2 == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
					ones_digit2++;
				}
				ones_digit2 = 0;
				tens_digit2++;
			}
			tens_digit2 = 0;
			ones_digit1++;
		}
		ones_digit1 = 0;
		tens_digit1++;
	}
	putchar('\n');
	return (0);
}
