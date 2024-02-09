#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 *
 * Description: line ends with \n
 * if n is 0 or less, print only \n
 *
 * Return: none
 */

void print_line(int n)
{
	int counter;

	if (n <= 0)
		printf("\n");
	else
	{
		counter = 0;
		for (; counter < n; counter++)
			printf("_");
		printf("\n");
	}
}
