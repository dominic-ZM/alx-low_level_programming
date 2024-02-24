#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: the string to work on
 *
 * Return: the encoded string
 */

char *rot13(char *str)
{
	int i;

	i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' && isalpha(str[i])
			str[i] = 'a' + (str[i] - 'a' + 13 ) % 26;
		else
			str[i] = 'A' + (str[i] - 'A' + 13) % 26;
	}
	return (str);
}
