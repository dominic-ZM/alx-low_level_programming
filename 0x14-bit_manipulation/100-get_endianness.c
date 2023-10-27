#include "main.h"

/**
 * get_endianness - check endianness of a system
 * @void: means function takes no arguments
 *
 * Return: 0 if big endian 1 if little endian
 */

int get_endianness(void)
{
	unsigned int mask;
	unsigned char *test;

	mask = 1;
	test = (unsigned char *)&mask;

	if (*test == 1)
		return (1);
	else
		return (0);
}
