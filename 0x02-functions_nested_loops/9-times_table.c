#include "main.h"

/**
 * times_table - prints 9 times table starting with 0
 * Return: no return value
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a * b > 9)
			{
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			else
			{
				_putchar(a * b + '0');
			}
			if (b != 9)
			{
				if (a >= b + 4)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
