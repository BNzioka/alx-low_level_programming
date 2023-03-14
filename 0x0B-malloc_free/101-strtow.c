#include <stdlib.h>
#include "main.h"

/**
 * count_words - Count the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
	if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		count++;
	i++;
	}

	return (count);
}

/**
 * strtow - Split a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n;

	if (str == NULL || *str == '\0')
		return (NULL);

	n = count_words(str);
	if (n == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (n + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < n; i++)
	{
	while (str[j] == ' ')
		j++;

	k = j;
	while (str[j] != ' ' && str[j] != '\0')
		j++;

	words[i] = malloc(sizeof(char) * (j - k + 1));
	if (words[i] == NULL)
	{
		for (i--; i >= 0; i--)
			free(words[i]);
		free(words);
		return (NULL);
	}

	for (; k < j; k++)
	words[i][k - j] = str[k];
	words[i][k - j] = '\0';
	}

	words[n] = NULL;
	return (words);
}
