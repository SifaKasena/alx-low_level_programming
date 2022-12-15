#include "main.h"
#include <stdio.h>

/**
 * more_numbers - pints 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		c = 0;
		while (c < 14)
		{
			_putchar(c + '0');
		}
		_putchar('\n);
	}
}
