#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if an error occured
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
	for (j = 0; j < argv[i][j]; j++)
	{
	if (!isdigit(argv[i][j]))

	{
		printf("Error\n");
		return (1);
	}

	}
	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
