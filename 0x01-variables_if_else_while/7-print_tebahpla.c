#include <stdio.h>

/**
 * main - Entry point for this program
 *
 * Description: print alphabets in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for  (alpha = 'z'; alpha > 96; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
