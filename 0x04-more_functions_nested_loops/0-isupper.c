#include "main.h"

/**
 * main - Checks for uppercase character
 * @c: the number to be checked
 * Return: 1 for uppwercase and 0 for anything else
 */

int _isupper(int c)

{
	if ((c >= 'A') && (c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
