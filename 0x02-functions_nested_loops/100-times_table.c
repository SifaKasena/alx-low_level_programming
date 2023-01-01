#include "main.h"

/**
 * print_times_table - prints n times table starting with 0
 * @n: number to print times table of
 * Return: no return value
 */

void print_times_table(int n)
{
	int a, b;

	for (a = 0; a <= n && n <= 15; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if (a * b > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((a * b) / 100 + '0');
				_putchar(((a * b) % 100) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			else if (a * b > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			else if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(a * b + '0');
			}
			else
			{
				_putchar(a * b + '0');
			}
		}
		_putchar('\n');
	}
}
