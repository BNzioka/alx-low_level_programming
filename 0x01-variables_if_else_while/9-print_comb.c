#include <stdio.h>

/**
 * main - A program that prints all numbers
 * Return: Always 0 (Success)
 */

int main(void)

{

	int d;

	for (d = 0; d < 10; d++)
	{
	putchar(d + '0');
	if (d < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
