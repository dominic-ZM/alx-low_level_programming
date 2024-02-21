#ifndef _MAIN
#define _MAIN

#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1000

/**
 * struct l_num - definition of a big number
 * @digits: array of digits it has
 * @length: how many digits it has
 *
 * Description: used in big number operations
 */

struct l_num
{
	int digits[MAX_DIGITS];
	int length;
};

void jack_bauer(void);
int _putchar(char c);
void times_table(void);
void print_times_table(int n);

#endif
