#include "main.h"

/**
 * get_bit - return bit at given index
 * @n: number to search through
 * @index: the given index, starting from 0
 *
 * Return: value at index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned int comparison;

	comparison = 0;

	if (index < comparison)
		return (-1);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
