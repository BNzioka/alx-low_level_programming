#include "main.h"
#include <stdio.h>

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - checks if a number is divisible
 * @num: number to be checked
 * @div: divisor
 * Return: if the number is divisible - 0.
 * if not divisible - 1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
/**
 * is_prime_number - determines if an integer is a prime number
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime, 0 if not.
 */
int is_prime_number(int n)
{
	int n = 0;
	int i = 0;

	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (is_prime_number(n, i + 1));
}
