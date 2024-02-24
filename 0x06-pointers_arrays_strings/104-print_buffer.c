#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: pinter to buffer
 * @size: number of bytes to print from buffer b
 *
 * Description: Each line starts with the position of the first byte
 * +of the line in hexadecimal (8 chars), starting with 0
 *
 * Return: none
 */

void print_buffer(char *b, int size)
{
	int i, j;
	char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	i = 0;

	for (; i < size; i += 10)
	{
		printf("%08x: ", i);

		j = 0;

		for (; j < 10; j += 2)
		{
			if (i + j < size)
				printf("%02x%02x ", (unsigned char)b[i + j], (unsigned char)b[i + j + 1]);
			else
				printf("     ");
		}
		printf(" ");

		j = 0;

		for (; j < 10 && i + j < size; j++)
		{
			c = b[i + j];

			if (c >= 32 && c <= 126)
				printf("%c", c);
			else
				printf(".");
		}
		printf("\n");
	}
}
