#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 * Return: 1 for posiitive n, -1 for negative n or zero for anything else
 */

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n ==  0)
	{
	_putchar(48);
	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	return (0);
}
