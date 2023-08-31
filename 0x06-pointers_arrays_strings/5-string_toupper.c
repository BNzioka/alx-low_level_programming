#include "main.h"

/**
 * string_toupper - A program that changes all lower case letters
 * of a string to uppercase
 * @str: String to be changed
 * Return: A pointer to the changed string
 *
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
