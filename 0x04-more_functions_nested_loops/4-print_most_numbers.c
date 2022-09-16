#include "main.h"
/**
 *print_most_number: - function print numbers from 0-1
 *function: -should not print 2 & 4
 *Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
	if (i == 50 || i == 52)
	{
		continue;
	}
	else
	{
		_putchar( i);
	}
	}
		i++;

		_putchar('\n');
}
