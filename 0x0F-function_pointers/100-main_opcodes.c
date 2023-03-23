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
	unsigned int bytes, i;
	unsigned char ptr;

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

	ptr = (unsiged char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", *(ptr + i));
		if (i != (bytes - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
