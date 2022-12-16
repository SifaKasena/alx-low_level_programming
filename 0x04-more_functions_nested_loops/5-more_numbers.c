#include "main.h"
#include <stdio.h>

/**
 * more_numbers - pints numbers 0 to 14 10 times
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
