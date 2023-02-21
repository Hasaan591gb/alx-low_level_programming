#include "main.h"

/* function declaration */
int _putchar(char c);

/**
 * uses _putchar to print string of char
 * returns 0 always (success)
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
 * return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar";
	printstr(str);
	-putchar('\n')
	return (0);
}
