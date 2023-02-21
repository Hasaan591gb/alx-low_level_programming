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

/**
 * main - Entry point for the program
 * Description: Print alphabets to console
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
