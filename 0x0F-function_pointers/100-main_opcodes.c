#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for the program
 * Description: prints opcode of own main()
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(int argc, char **argv)
{
	int bytes, i;
	int (*ptr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)ptr;
		printf("%.2x", opcode);
		if (i == bytes - 1)
			continue;
		printf(" ");
		ptr++;
	}
	printf("\n");
	return (0);
}
