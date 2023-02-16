#include <stdio.h>
/**
 * main - A program that prints the sizes of various type
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	init b;
	long init c;
	long long init d;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an init: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
