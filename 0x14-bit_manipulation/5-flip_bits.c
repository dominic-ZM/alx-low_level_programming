#include "main.h"

/**
 * flip_bits - return number of bits required to flip to get another number
 * @n: the first number
 * @m: the second number
 *
 * Description: not allowed to use % or / operators
 *
 * Return: number of bits required to flip in n to get m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numbers_xor;
	unsigned int count;

	numbers_xor = n ^ m;
	count = 0;

	while (numbers_xor)
	{
		count += numbers_xor & 1;
		numbers_xor >>= 1;
	}
	return (count);
}
