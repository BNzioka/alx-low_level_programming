#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed to the program
 * @argc: count of the arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/

	printf("%i\n", argc - 1);

	return (0);
}
