#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to print from towards 98
 * Return - no return value
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			if (n == 98)
				break;
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			_putchar(n);
			if (n == 98)
				break;
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
}
