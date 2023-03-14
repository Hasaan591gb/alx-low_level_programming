#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, length = 0;
	char *ptr_av;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
	}

	ptr_av = malloc(sizeof(char) * (length + ac + 1));

	if (ptr_av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr_av[k] = av[i][j];
			k++;
		}
		ptr_av[k] = '\n';
		k++;
	}
	ptr_av[k + 1] = '\0';

	return (ptr_av);
}
