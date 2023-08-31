#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints alphabet in lc then new line
 * Return: Always 0 (Success)
 */


int main(void)

{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');
	return (0);


}
