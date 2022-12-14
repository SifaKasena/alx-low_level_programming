#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @n: number to print last digit
 * Return: returns the last digit
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
	else
	{
		_putchar(-(n % 10) + 48);
		return (-(n % 10));
	}
}
