#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a digonal line on the terminal
 * @n: number of times to print character '\'
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	b = n;
	if (n > 0)
	{
		while (n > 0)
		{
			for (a = 0; a < b - n; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			n--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
