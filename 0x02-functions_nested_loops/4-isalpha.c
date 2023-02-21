#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
