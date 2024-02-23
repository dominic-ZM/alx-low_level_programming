#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string to operate on
 *
 * Return: pointer to modified string
 */

char *cap_string(char *str)
{
	int i;
	char *delimiters = " .\n\t";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = toupper(str[0]);

	i = 1;

	for (; str[i] != '\0'; i++)
	{
		if (strchr(delimiters, str[i]) != NULL && isalpha(str[i + 1]))
			str[i + 1] = toupper(str[i + 1]);
	}
	return (str);
}
