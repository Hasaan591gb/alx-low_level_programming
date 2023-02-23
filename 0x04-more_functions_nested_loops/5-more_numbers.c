#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar('1');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
