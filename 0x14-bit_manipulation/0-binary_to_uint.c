#include "main.h"

/**
 * binary_to_uint - function to convert binary to uint
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int result;
	int counter;
	int size;
	int flag;

	if (b == NULL)
		return (0);

	flag = 0;
	size = 0;

	while (*b)
	{
		if ((*b != '0' && *b != '1') && (flag == 0))
			flag = 1;

		size += 1;
		b++;
	}

	if (flag == 1)
		return (0);

	b -= size;

	counter = 0;
	result = 0;

	for (; counter < size; counter++)
	{
		if (*b == '1')
			result += 1 << (size - (counter + 1));

		b++;
	}

	return (result);
}
