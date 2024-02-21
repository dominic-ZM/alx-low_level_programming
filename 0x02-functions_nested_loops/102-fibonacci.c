#include "main.h"


#define MAX_DIGITS 1000

/**
 * add - adds two numbers
 * @result: the outcome of the operation
 * @num1: first number to add
 * @num2: second number to add
 *
 * Return: none
 */

void add(int result[], int num1[], int num2[])
{
	int carry;
	int i;

	carry = 0;
	i = MAX_DIGITS - 1;

	for (; i >= 0; i--)
	{
		result[i] = num1[i] + num2[i] + carry;
		carry = result[i] / 10;
		result[i] %= 10;
	}
}

/**
 * copy - copies content from one array to another
 * @dest: the receiving array
 * @src: the source of the data
 *
 * Return: none
 */

void copy(int dest[], int src[])
{
	int i;

	i = 0;

	for (; i < MAX_DIGITS; i++)
		dest[i] = src[i];
}

/**
 * print_number - prints a number's representation from an array
 * @num: the array representing the number
 *
 * Return: none
 */

void print_number(int num[])
{
	int i;

	i = 0;

	while (i < MAX_DIGITS && num[i] == 0)
		i++;
	if (i == MAX_DIGITS)
	{
		printf("0");
		return;
	}
	for (; i < MAX_DIGITS; i++)
		printf("%d", num[i]);
}

/**
 * main - entry point of program
 * @void: main takes no argument
 *
 * Return: 0 if success
 */

int main(void)
{
	int fib1[MAX_DIGITS] = {0};
	int fib2[MAX_DIGITS] = {0};
	int fib_next[MAX_DIGITS] = {0};
	int i;

	fib1[MAX_DIGITS - 1] = 1;
	fib2[MAX_DIGITS - 1] = 2;

	printf("%d, %d", 1, 2);

	i = 3;

	for (; i <= 50; i++)
	{
		add(fib_next, fib1, fib2);
		copy(fib1, fib2);
		copy(fib2, fib_next);
		printf(", ");
		print_number(fib_next);
	}
	printf("\n");
	return (0);
}
