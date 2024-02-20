#include "main.h"

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * @void: takes no arguments
 *
 * Description: 1024 (excluded), followed by a new line.
 *
 * Return: 0 success, 1 otherwise
 */

int main(void)
{
	int num;
	int factor_sum;

	factor_sum = 0;
	num = 1;

	for (; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			factor_sum = factor_sum + num;
	}
	printf("%d\n", factor_sum);
	return (0);
}
