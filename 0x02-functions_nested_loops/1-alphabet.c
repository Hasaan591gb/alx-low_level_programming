#include "main.h"

/* function declaration */
int _putchar(char c);

/**
 * print_alphabet - Prints alphabets to console
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
}
