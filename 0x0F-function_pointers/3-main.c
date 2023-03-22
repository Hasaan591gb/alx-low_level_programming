#include "3-calc.h"

/**
 * main - entry point for the program
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int result, num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(op))(num1, num2);
	printf("%d\n", result);
	return (0);
}
