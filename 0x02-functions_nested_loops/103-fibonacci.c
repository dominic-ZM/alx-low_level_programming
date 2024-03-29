#include "main.h"

/**
 * test_upper_limit - tests if a number is greater than 4 million
 * @num: the number to be tested
 *
 * Return: 1 true, 0 false
 */

int test_upper_limit(const struct l_num *num)
{
	int i;

	if (num->digits[MAX_DIGITS - num->length] >= 4)
	{
		if (num->length >= 7)
		{
			i = MAX_DIGITS - num->length + 1;

			for (; i < MAX_DIGITS; i++)
			{
				if (num->digits[i] != 0)
				return (1);
			}
		}
	}
	return (0);
}

/**
 * print_number - prints a number from its array representation
 * @num: pointer to the array representing the number
 * @length: length of the array
 *
 * Description: function prints the number represented by the array 'num'
 * It starts from the most significant digit
 * prints each digit until the least significant one.
 *
 * Return: none
 */
void print_number(const int *num, int length)
{
	int i;

	i = 0;
	for (; i < MAX_DIGITS - length && num[i] == 0; i++)

	if (i == MAX_DIGITS)
	{
		printf("ka0\n");
		return;
	}
	for (; i < MAX_DIGITS; i++)
	{
		printf("%d", num[i]);
	}
	printf("\n");
}

/**
 * initialize - sets up a l_num in memory
 * @num: number to be setup
 *
 * Return: none
 */

void initialize(struct l_num *num)
{
	memset(num->digits, 0, MAX_DIGITS * sizeof(int));
	num->length = 1;
}

/**
 * add - adds two l_nums
 * @res: the outcome of the operation
 * @num1: first l_num to add
 * @num2: second l_num to add
 *
 * Return: none
 */

void add(struct l_num *res, const struct l_num *num1, const struct l_num *num2)
{
	int carry;
	int i;
	int sum;
	int length;
	int num1_length;
	int num2_length;

	carry = 0;
	i = MAX_DIGITS - 1;
	num1_length = MAX_DIGITS - num1->length;
	num2_length = MAX_DIGITS - num2->length;
	length = 0;

	for (; i >= 0; i--)
	{
		sum = num1->digits[i] + num2->digits[i] + carry;
		res->digits[i] = sum % 10;
		carry = sum / 10;

		length++;
		if (i <= num1_length && i <= num2_length)
			break;
	}
	if (carry > 0)
	{
		res->digits[i - 1] = carry;
		length++;
	}
	res->length = length;
}

/**
 * main - entry point of program
 * @void: main takes no argument
 *
 * Return: 0 if success
 */

int main(void)
{
	struct l_num fib1, fib2, fib_next, sum;

	initialize(&fib1);
	initialize(&fib2);
	initialize(&fib_next);
	initialize(&sum);

	fib2.digits[MAX_DIGITS - 1] = 1;

	while (1)
	{
		add(&fib_next, &fib1, &fib2);
		if (test_upper_limit(&fib_next))
			break;
		if (fib_next.digits[MAX_DIGITS - 1] % 2 == 0)
			add(&sum, &sum, &fib_next);
		memcpy(&fib1, &fib2, sizeof(struct l_num));
		memcpy(&fib2, &fib_next, sizeof(struct l_num));
	}
	print_number(sum.digits, sum.length);
	return (0);
}
