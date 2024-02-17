#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * @void: function takes no argument
 *
 * Return: none
 */

void jack_bauer(void)
{
	int h_counter;
	int m_counter;

	m_counter = 0;
	h_counter = 0;

	for (; h_counter < 24; h_counter++)
	{
		m_counter = 0;
		for (; m_counter < 60; m_counter++)
			printf("%02d:%02d\n", h_counter, m_counter);
	}
}
