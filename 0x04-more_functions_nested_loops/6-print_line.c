#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line on the terminal
 * @n: number of times to print character _
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
