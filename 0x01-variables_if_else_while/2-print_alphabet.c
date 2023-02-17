#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: Print alphabets to console
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	for (; alphabet < 123; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
