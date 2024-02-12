#include "main.h"

/**
 * _isComposite - checks if a number is composite
 * @num: the number to be tested
 *
 * Return: 1 if true, 0 if false
 */

int _isComposite(int num)
{
	int i;

	if (num <= 1)
		return (0);
	i = 2;

	for (; i * i <= num; i++)
	{
		if (num % i == 0)
			return (1);
	}
	return (0);
}
