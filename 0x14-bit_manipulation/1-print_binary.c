#include "main.h"

/**
 * print_binary - print binary representation of given number
 * @n: given number
 *
 * Return: none
 */

void print_binary(unsigned long int n)
{
	int counter;
	int flag;

	if (n == 0)
	{
		printf("0");
		return;
	}

	flag = 0;
	counter = sizeof(n) * 8 - 1;

	for (; counter >= 0; counter--)
	{
		if ((n >> counter) & 1)
			flag = 1;

		if (flag == 1)
			((n >> counter) & 1) ? printf("1") : printf("0");
	}
}
