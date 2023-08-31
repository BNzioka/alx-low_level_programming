#include "main.h"

/**
 * flip_bits - returns number of nits required to flip
 * from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}

	return (count);
}
