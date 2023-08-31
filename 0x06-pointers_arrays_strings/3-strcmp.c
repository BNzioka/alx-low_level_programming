#include "main.h"

/**
 * _strcmp - A program that compares two strings
 * @s1: input value
 * @s2: input value
 * Return: if str1 < str2, the neg diff of the 1st unmatched character
 * if str1 == str2, 0.
 * if str1 > str2, the positive diff of the 1st unmatched characters
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
