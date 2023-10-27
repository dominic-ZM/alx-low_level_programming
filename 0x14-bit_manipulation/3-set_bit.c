#include "main.h"

/**
 * set_bit - set a bit value at a given index to 1
 * @n: the number to operate on
 * @index: the given index, starting at 0
 *
 * Return: 1 if success or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int comparator;

	comparator = 0;

	if (index < comparator)
		return (-1);
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
