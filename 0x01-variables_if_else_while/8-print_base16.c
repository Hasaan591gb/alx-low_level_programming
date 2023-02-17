#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Description: Print the hexadecimal digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 16; numb++)
		if (numb < 10)
			putchar(numb + '0');
		else
			putchar(numb + 'W');
	putchar('\n');
	return (0);
}
