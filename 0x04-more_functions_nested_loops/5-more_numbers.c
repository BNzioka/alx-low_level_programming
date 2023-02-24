#include "main.h"

/**
 * more_numbers - print 10 times the number from 0 to 14
 * Return: 10 times of the numbers from 0 to 14
 */

void more_numbers(void)

{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y >= 10)
	{
	_putchar('1');
	}
	_putchar(y % 10 + '0');
	}
	_putchar('\n');
	}

}
