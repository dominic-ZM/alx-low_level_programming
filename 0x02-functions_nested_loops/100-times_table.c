#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: selects which time table to print
 *
 * Return: none
 */

void print_times_table(int n)
{
	int temp;
	int v_counter;
	int h_counter;

	if (n > 15 || n < 0)
		return;
	temp = 0;
	v_counter = 0;

	for (; v_counter <= n; v_counter++)
	{
		h_counter = 0;
		for (; h_counter <= n; h_counter++)
		{
			temp = v_counter * h_counter;

			if (h_counter == 0)
				printf("%d", temp);
			else
				printf("%4d", temp);
			if (h_counter < n)
				printf(",");
			else
				printf("\n");
		}
	}
}
