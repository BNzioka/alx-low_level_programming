#include <stdio.h>
#include <stdlib.h>


/**
 * main - A program that prints base 16 numbers in lc
 * Return: Always 0 (Success)
 */

int main(void)

{

	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);

}
