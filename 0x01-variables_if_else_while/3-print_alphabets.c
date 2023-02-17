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
	char alphabet_1;
	char alphabet_2;

	alphabet_1 = 'a';
	for (; alphabet_1 < 123; alphabet_1++)
		putchar(alphabet_1);
	alphabet_2 = 'A';
	for (; alphabet_2 < 91; alphabet_2++)
		putchar(alphabet_2);
	putchar('\n');
	return (0);
}
