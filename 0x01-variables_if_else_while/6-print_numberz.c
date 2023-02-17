#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: Prints all single digit decimals
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
		putchar(numb + '0');
	putchar('\n');
	return (0);
}
