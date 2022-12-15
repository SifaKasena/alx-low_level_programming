#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to print from towards 98
 * Return - no return value
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		do {
			printf(n--);
		} while (n > 98);
	}
	else
	{
		do {
			printf(n++);
		} while (n < 98);
	}
}
