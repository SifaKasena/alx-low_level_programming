#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @n: number to print its absolute value
 * Return: returns absolute value of integer
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
