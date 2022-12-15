#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a digonal line on the terminal
 * @n: number of times to print character '\'
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	while (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
