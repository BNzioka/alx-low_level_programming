#include <unistd.h>

/**
 * _putchar - Writes character c to stdout
 * @c: character to be printed
 * Return: On Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
