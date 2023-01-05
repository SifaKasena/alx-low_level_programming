#include "main.h"

/**
 * factorial - calculates factorial of a given number
 * @n: number to get the factorial of
 * Return: resulting factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
