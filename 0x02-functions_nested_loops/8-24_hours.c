#include "main.h"

/**
 * jack_bauer - print every minute of the day
 */
void jack_bauer(void)
{
	int i, j, k, l, flag;

	flag = 0;
	for (i = 0; i <= 2 && !flag; i++)
	{
		for (j = 0; j <= 9 && !flag; j++)
		{
			for (k = 0; k <= 5 && !flag; k++)
			{
				for (l = 0; l <= 9 && !flag; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					if (i == 2 && j == 3 && k == 5 && l == 9)
						flag = 1;
				}
			}
		}
	}
}
