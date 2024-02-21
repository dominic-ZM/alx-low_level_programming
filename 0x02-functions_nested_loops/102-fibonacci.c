#include <stdio.h>
#include <gmp.h>

/**
 * main - prints the first 50 Fibonacci numbers followed by a new line
 *
 * Description: Start with 1 and 2
 * Must be separated by comma, followed by a space.
 *
 * Return: Always 0
 */
int main(void)
{
	mpz_t previous;
	mpz_t current;
	mpz_t next;
	char *previous_str;
	char *current_str;
	int counter;

	mpz_init_set_ui(previous, 1);
	mpz_init_set_ui(current, 2);

	previous_str = mpz_get_str(NULL, 10, previous);
	current_str = mpz_get_str(NULL, 10, current);

	printf("%s, %s", previous_str, current_str);

	counter = 0;

	for (; counter < 48; counter++)
	{
		mpz_init(next);
		mpz_add(next, previous, current);
		gmp_printf(", %Zd", next);
		mpz_set(previous, current);
		mpz_set(current, next);
		mpz_clear(next);
	}
	printf("\n");
	mpz_clear(previous);
	mpz_clear(current);
	return (0);
}
