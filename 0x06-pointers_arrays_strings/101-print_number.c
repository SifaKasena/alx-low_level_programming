#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int cpy;

	cpy = n;
	if (n < 0)
	{
		cpy = -n;
		_putchar('-');
	}
	if (cpy / 10)
	{
		print_number(cpy / 10);
	}
	_putchar(cpy % 10 + '0');
}
