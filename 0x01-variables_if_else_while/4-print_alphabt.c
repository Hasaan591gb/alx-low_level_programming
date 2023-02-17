#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Description: Print alphabets except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	for (; alphabet < 123; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
