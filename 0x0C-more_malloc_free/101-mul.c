#include <stdio.h>
#include <stdlib.h>

int _isdigit(int c);
int _strlen(char *s);
int _atoi(char *s);

int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check for correct number of arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	/* Convert arguments to integers */
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	/* Check for invalid input */
	if (num1 == -1 || num2 == -1)
	{
		printf("Error\n");
		return (98);
	}

	/* Multiply numbers and print result */
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}

/**
* _isdigit - Checks if a character is a digit
*
* @c: The character to check
*
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
* _strlen - Computes the length of a string
*
* @s: The string to compute the length of
*
* Return: The length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
* _atoi - Converts a string to an integer
*
* @s: The string to convert
*
* Return: The integer value of the input string, or -1 on error
*/
int _atoi(char *s)
{
	int i, len, num = 0, sign = 1;

	/* Check for negative sign */
	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	/* Check for invalid characters */
	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
	if (!_isdigit(s[i]))
		return (-1);
	}

	/* Compute integer value */
	for (i = 0; i < len; i++)
	{
		num = num * 10 + (s[i] - '0');
	}

	return (num * sign);
}
