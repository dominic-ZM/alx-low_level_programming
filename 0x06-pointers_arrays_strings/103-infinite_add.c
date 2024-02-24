#include "main.h"

/**
 * reverse_string - reverses a string
 * @str: the string to work on
 *
 * Return: the modified string's pointer
 */

char *reverse_string(char *str)
{
	int len;
	int i;
	char temp;

	len = strlen(str);
	i = 0;

	for (; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	return (str);
}

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to result buffer
 * 0 if result cannot be stored in buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry, index, len1, len2, digit1, digit2, sum;

	carry = 0;
	index = 0;
	len1 = strlen(n1);
	len2 = strlen(n2);

	while (len1 > 0 || len2 > 0 || carry > 0)
	{
		digit1 = len1 > 0 ? n1[len1 - 1] - '0' : 0;
		digit2 = len2 > 0 ? n2[len2 - 1] - '0' : 0;
		sum = digit1 + digit2 + carry;

		if (index >= size_r - 1)
			return (0);
		r[index++] = (sum % 10) + '0';
		carry = sum / 10;

		if (len1 > 0)
			len1--;
		if (len2 > 0)
			len2--;
	}
	r[index] = '\0';

	reverse_string(r);
	return (r);
}
