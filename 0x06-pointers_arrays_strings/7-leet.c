#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to work on
 *
 * Return: the modified string
 */

char *leet(char *str)
{
	char *str_chars = "aAeEoOtTlL";
	char *num_chars = "4433007711";
	int i, j;

	i = 0;

	for (; str[i] != '\0'; i++)
	{
		j = 0;

		for (; str_chars[j] != '\0'; j++)
		{
			if (str[i] == str_chars[j])
			{
				str[i] = num_chars[j];
				break;
			}
		}
	}
	return (str);
}
