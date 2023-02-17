#include <stdio.h>
#include <stdlib.h>


/**
 * main - A program that prints lc alphabets in reverse and new line
 * Return: Always 0 (Sucess)
 */


int main(void)

{

	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);

}
