#include "main.h"

/**
 * main - entry point of program
 * @void: takes no argument
 *
 * Descrition: finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * numbers should be separated by comma, followed by a space ,
 *
 * Return: 0 success, 1 otherwise
 */

int main(void)
{
	int prev, curr, next, count;

	prev = 1;
	curr = 2;
	count = 0;

	printf("%d, %d, ", prev, curr);
	count += 2;

	while (count < 98)
	{
		next = prev + curr;

		if (count == 97)
			printf("%d\n", next);
		else
			printf("%d, ", next);
		count++;
		prev = curr;
		curr = next;
	}
	return (0);
}
