#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints all 3 digit combinations
 * Return: Always 0 (Success)
 */

int main(void)

{

	int d, p;

	for (d = '0'; d < '9'; d++)
	{

	for (p = d + 1; p <= '9'; p++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(p);
	if (d == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
