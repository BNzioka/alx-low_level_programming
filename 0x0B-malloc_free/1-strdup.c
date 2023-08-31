#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string in a new location
 * @str: input string
 *
 * Return: pointer to duplicated string, or NULL if memory allocation fails
 */
char *_strdup(char *str)
{
	char *newstr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		newstr[i] = str[i];

	newstr[i] = '\0';

	return (newstr);

}
