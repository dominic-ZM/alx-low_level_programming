#include "main.h"

/**
 * initialize - sets up a BigNumber in memory
 * @num: number to be setup
 *
 * Return: none
 */

void initialize (struct BigNumber *num)
{
	memset(num->digits, 0, MAX_DIGITS * sizeof(int));
	num->length = 1;
}

/**
 * add - adds two BigNumbers
 * @result: the outcome of the operation
 * @num1: first BigNumber to add
 * @num2: second BigNumber to add
 *
 * Return: none
 */

void add(struct BigNumber *result, const struct BigNumber *num1, const struct BigNumber *num2)
{
	int carry;
	int i;
	int sum;

	carry = 0;
	i = MAX_DIGITS - 1;

	for (; i >= 0; i--)
	{
		sum = num1->digits[i] + num2->digits[i] + carry;
		result->digits[i] = sum % 10;
		carry = sum / 10;
	}
	result->length = MAX_DIGITS;

	while (result->length > 1 && result->digits[result->length -1] == 0)
		result->length--;
}

/**
 * main - entry point of program
 * @void: main takes no argument
 *
 * Return: 0 if success
 */

int main(void)
{
	struct BigNumber fib1, fib2, fib_next, sum;
	int i;

	initialize(&fib1);
	initialize(&fib2);
	initialize(&fib_next);
	initialize(&sum);

	fib2.digits[MAX_DIGITS - 1] = 1;

	while (1)
	{
		add(&fib_next, &fib1, &fib2);
		if (fib_next.digits[MAX_DIGITS - fib_next.length] > 4)
		{
			if (fib_next.length > 6)
				break;
		}
		if (fib_next.digits[MAX_DIGITS - 1] % 2 == 0)
			add(&sum, &sum, &fib_next);
		memcpy(&fib1, &fib2, sizeof(struct BigNumber));
		memcpy(&fib2, &fib_next, sizeof(struct BigNumber));
	}
	i = 0;

	for (; i < sum.length; i++)
		printf("%d", sum.digits[i]);
	printf("\n");
	return (0);
}
