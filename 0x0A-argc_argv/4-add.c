#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point for the program
 * Description: prints sum of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, value, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		if (!isdigit(arg[0]) && (arg[0] != '-' || !isdigit(arg[1])))
		{
			printf("Error\n");
			return (1);
		}
		value = atoi(arg);
		sum += value;
	}
	printf("%d\n", sum);
	return (0);
}
