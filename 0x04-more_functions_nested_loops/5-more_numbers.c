#include "main.h"
#include <stdio.h>

/**
 * more_numbers - pints numbers 0 to 14 10 times
 * Return: void
 */

void more_numbers(void)
{
	int n = 0;
	int a, b;

	while (n < 10)
	{
		for (a = 0; a < 2; a++)
		{
			for (b = 0; b < 10; b++)
			{
				if (a == 1 && b > 4)
					break;
				if (a == 1)
					_putchar(a +'0');
				_putchar(b + '0');
			}
		}
		_putchar('\n');
	}
}
