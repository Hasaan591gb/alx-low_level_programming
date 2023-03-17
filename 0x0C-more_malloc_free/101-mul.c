#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if parameter is digit
 * @s: parameter
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - measure length of string parameter
 * @s: string parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int length, i;

	for (i = 0, length = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}

/**
 * _isvalid - checks whether arguments to main are valid
 * @argc: argument count
 * @argv: argument vector
 */
void _isvalid(int argc, char **argv)
{
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = *(argv + 1);
	num2 = *(argv + 2);
	if (!_isdigit(num1) || !_isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}
}

/**
 * _revstr - reverses argument string
 * @str: string parameter
 * Return: pointer to reversed string
 */
char *_revstr(char *str)
{
	int i, len, temp;

	len = _strlen(str);
	for (i = 0; i < (len / 2); i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i] = temp;
	}
	return (str);
}

/**
 * local_calloc - works as calloc
 * @num1: string parameter 1
 * @num2: string parameter 2
 * Return: void pointer to allocated memory
 */
void *local_calloc(char *num1, char *num2)
{
	int i, bytes;
	char *sum;

	bytes = _strlen(num1) + _strlen(num2);
	sum = malloc(bytes + 1);
	if (sum == NULL)
		return (NULL);
	for (i = 0; i < bytes; i++)
		sum[i] = 0;
	sum[i] = '\0';
	return (sum);
}

/**
 * main - entry point for the program
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int i, j, temp_num = 0, quotient;
	char *num1, *num2, *sum, *rev_num1, *rev_num2;

	_isvalid(argc, argv);

	num1 = *(argv + 1);
	num2 = *(argv + 2);
	rev_num1 = _revstr(num1);
	rev_num2 = _revstr(num2);
	sum = local_calloc(num1, num2);

	for (i = 0; rev_num1[i] != '\0'; i++)
	{
		quotient = 0;
		for (j = 0; rev_num2[j] != '\0'; j++)
		{
			temp_num = (rev_num1[i] - '0') * (rev_num2[j] - '0');
			sum[j + i] += temp_num % 10 + quotient;
			quotient = (temp_num / 10) + (sum[j + i] / 10);
			sum[j + i] %= 10;
		}
		sum[j + i] += quotient;
	}

	while (i + j > 0 && sum[i + j - 1] == 0)
		i--;
	while (i + j > 0)
	{
		putchar(sum[i + j - 1] + '0');
		j--;
	}

	putchar('\n');
	free(sum);
	return (0);
}
