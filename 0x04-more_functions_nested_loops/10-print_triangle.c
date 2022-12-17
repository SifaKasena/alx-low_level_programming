#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if (size - b <= a - 1)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
