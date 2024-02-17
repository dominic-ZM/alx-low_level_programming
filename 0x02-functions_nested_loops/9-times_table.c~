#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * @void: function takes no arguments
 *
 * @Return: none
 */

void times_table(void)
{
	int base;
	int temp;
	int v_counter;
	int h_counter;

	base = 10;
	temp = 0;
	v_counter = 0;

	for (; v_counter < base; v_counter++)
	{
		h_counter = 0;
		for (; h_counter < base; h_counter++)
		{
			temp = v_counter * h_counter;

			printf("%d", temp);
			if (h_counter < base - 1)
				printf(",  ");
			else
				printf("\n");
		}
	}
}
