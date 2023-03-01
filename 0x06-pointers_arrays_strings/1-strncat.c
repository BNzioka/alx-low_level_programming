#include "main.h"

/**
 * _strncat - A program that concatenates two strings using
 *
 * at most n bytes from src
 *
 * @dest: input value
 *
 * @src: input value
 *
 * @n: input value
 *
 * Return: A pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)

{

	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);

}
