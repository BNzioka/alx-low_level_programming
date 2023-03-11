#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: number of arguments passed to the program
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	/*check if the number or argument is correct */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* Convert integers to arguments and multiply them */
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	/* Print the result */
	printf("%d\n", result);

	return (0);
}
