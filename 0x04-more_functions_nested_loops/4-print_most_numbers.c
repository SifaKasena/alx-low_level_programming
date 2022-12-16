#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - pints numbers 0 to 9 apart from 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
			continue;
		putchar(n);
	}
	_putchar('\n');
}
