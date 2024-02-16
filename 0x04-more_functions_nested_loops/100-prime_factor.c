#include <stdio.h>

/**
 * largestPrimeFactor - finds largest prime factor of a number
 * @num: number to work on
 *
 * Return: the largest prime factor of a number
 */

long int largestPrimeFactor(long int num)
{
	long int largest;
	long int i;

	largest = -1;

	while (num % 2 == 0)
	{
		largest = 2;
		num /= 2;
	}
	i = 3;

	for (; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest = i;
			num /= i;
		}
	}
	if (num > 2)
		largest = num;

	return (largest);
}

/**
 * main - entry point of program
 * @void: means main takes no arguments
 *
 * Return: 0 success, other codes for failure status code
 */

int main(void)
{
	long int num;

	num = 612852475143;

	printf("%ld\n", largestPrimeFactor(num));

	return (0);
}
