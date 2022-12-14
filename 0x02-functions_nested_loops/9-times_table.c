#include "main.h"

/**
 * times_table - prints 9 times table starting with 0
 * Return: no return value
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar((b*a)+'0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
