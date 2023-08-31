#include "main.h"

/**
 * set_bit - sets the bit value to 1 at a provided index
 * @n: pointer to modification number
 * @index: bit indext to be set
 *
 * Return: 1 if worked or 0 if there is an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n |= (1UL << index);

	return (1);
}
