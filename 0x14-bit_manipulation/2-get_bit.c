#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: source number of the bit
 * @index: source index of the bit
 *
 * Return: value of a bit at index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
