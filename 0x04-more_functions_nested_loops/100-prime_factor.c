#include "main.h"

/**
 * main - entry point of program
 * @num: the number to be tested
 *
 * Description: checks if a number is composite
 *
 * Return: 0 success, others mean failure or error
 */

int main(void)
{
	long int i;
	long int j;
	long int largest;
	long int num;
	int p_flag;

	i = 2;
	num = 612852475143;
	p_flag = 0;
	largest = 0;

	for (; i <= num; i++)
	{
		if (num % i == 0)
		{
			if (i > 1)
			{
				j = 2;

				for (; j * j <= i; j++)
				{
					if (i % j == 0)
					{
						p_flag = 0;
						break;
					}
					else
						p_flag = 1;
				}
			}
			if ((p_flag == 1) && (i < num) && (i > largest))
				largest = i;
		}
	}
	printf("%ld\n", largest);
	return (0);
}
