#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int n = '0';

	while (n <= '9')
		_putchar(n++);
	_putchar('\n');
}
