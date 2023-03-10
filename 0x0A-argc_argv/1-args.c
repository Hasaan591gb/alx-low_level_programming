#include <stdio.h>

/**
 * main - entry point for the program
 * Description: prints number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
