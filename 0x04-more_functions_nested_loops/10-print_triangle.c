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

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			if (b != size - a - 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
