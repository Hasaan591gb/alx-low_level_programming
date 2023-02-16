#include <string.h>
#include <unistd.h>

/**
 * main - Entry point for the program
 *
 * Description: Prints string to the standard error
 *
 * Return: Always 1 (Sucess)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, strlen(str));
	return (1);
}
