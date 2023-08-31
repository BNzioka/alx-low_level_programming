#include "main.h"

/**
 * clear_bit - sets bit value to 0 at a provided index
 * @n: pointer to the modification number
 * @index: bit index to be set
 *
 * Return: 1 if worked or -1 if there is error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
