#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - pints numbers 0 to 9 apart from 2 and 4
 * Return: void
 */

void more_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		if (n != '2' || n != '4')
			_putchar(n);
		n++;
	}
	_putchar('\n');
}
