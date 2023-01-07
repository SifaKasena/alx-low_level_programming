#include "main.h"

/**
 * is_prime_number - checks whether a number is prime
 * @n: number to be checked
 * Return: 1 if prime 0 if not prime
 */

int is_prime_number(int n)
{
	int x = 2;

	if (n < 2)
		return (0);
	else if (n <= 3)
		return (1);
	else
		return (divisible(&x, n));
}

/**
 * divisible - checks whether n is divisible by any number
 * between 2 and itself
 * @x: pointer to result
 * @n: number to be checked
 * Return: 1 if prime 0 otherwise
 */

int divisible(int *x, int n)
{
	if (*x == n)
	{
		*x = 1;
	}
	else if (n % *x == 0)
	{
		*x = 0;
	}
	else
	{
		*x += 1;
		divisible(x, n);
	}
	return (*x);
}
