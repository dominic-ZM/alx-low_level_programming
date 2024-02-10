#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 *
 * Description: If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 *
 * Return: none
 */

void print_triangle(int size)
{
	int v_counter;
	int h_counter;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	v_counter = 1;

	for (; v_counter <= size; v_counter++)
	{
		h_counter = 0;

		for (; h_counter < size - v_counter; h_counter++)
			_putchar(' ');
		for (; h_counter < size; h_counter++)
			_putchar('#');
		_putchar('\n');
	}
}
