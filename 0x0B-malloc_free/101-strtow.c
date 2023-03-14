#include <stdio.h>
#include <stdlib.h>

/**
 * check_NULL - checks if parameter is empty
 * @str: parameter string
 * Return: 1 if yes 0 otherwise
 */
int check_NULL(char *str)
{
	int i;

	if (str == NULL)
		return (1);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		if (str[i] != ' ')
			break;
	}
	if (str[i] == '\0')
		return (1);
	return (0);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	int i, j, k, num_words, word_start, word_len;
	char **words, *word;

	i = check_NULL(str);
	if (i == 1)
		return (NULL);

	num_words = 0;
	for (j = 0; str[j] == ' '; j++)
		continue;
	for (i = j; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			num_words++;
	}
	num_words++;
	words = (char **) malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_start = 0;
	word_len = 0;
	j = 0;
	for (i = 0; i < num_words; i++)
	{
		while (str[j] == ' ')
			j++;
		word_start = j;
		for (; str[j] != ' ' && str[j] != '\0'; j++)
			word_len++;
		word = (char *) malloc((word_len + 1) * sizeof(char));
		if (word == NULL)
			return (NULL);
		for (k = 0; k < word_len; k++)
			word[k] = str[word_start + k];
		word[word_len] = '\0';
		words[i] = word;
		word_len = 0;
	}
	words[num_words] = NULL;
	return (words);
}
