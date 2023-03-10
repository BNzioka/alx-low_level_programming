#include "main.h"
#include<stdio.h>

/**
 * _puts - function declaration
 * @str: string pointer
 * Return: void
 */

void _puts(char *str)
{
	int index;

	for (index = 0; *(str + index) != '\0'; index++)
	{
		_putchar(*(str + index));
	}
	_putchar('\n');
}
