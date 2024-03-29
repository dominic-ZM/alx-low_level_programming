#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * @void: no arguments
 *
 * Description: for multiples of three print Fizz
 * for the multiples of five print Buzz
 * for multiples of both three and five print FizzBuzz
 *
 * Return: 0 success, 1 failure
 */

int main(void)
{
	int counter;

	counter = 1;

	for (; counter < 101; counter++)
	{
		if ((counter % 3 == 0) && (counter % 5 == 0))
			printf("FizzBuzz");
		else if (counter % 3 == 0)
			printf("Fizz");
		else if (counter % 5 == 0)
			printf("Buzz");
		else
			printf("%d", counter);
		if (counter < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
