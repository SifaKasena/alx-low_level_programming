#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	-putchar('\n');
}
