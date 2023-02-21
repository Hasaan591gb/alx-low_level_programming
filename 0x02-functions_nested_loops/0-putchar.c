#include "main.h"

/* function declaration */
int _putchar(char c);

/**
 * printstr - prints a string of characters to stdout
 * @string: The string to print
 *
 * Return: The number of characters printed
 */
int printstr(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
	return (0);
}

/**
 * main - Entry point for the program
 * Description: use _putchar.c and main.h to print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar";

	printstr(str);
	_putchar('\n');
	return (0);
}
