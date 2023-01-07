#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer to find squareroot of
 * Return: resulting number, -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int ans, x = 0;

	if (n < 0)
		ans = -1;
	else
		ans = square(&x, n);
	return (ans);
}

/**
 * square - loops through all squares of natural numbers and
 * finds if one is equal to n else it returns -1
 * @x: adrress to hold the result
 * @n: square to test against
 * Return: resulting integer
 */

int square(int *x, int n)
{
	int sq = *x * *x;

	if (sq < n)
	{
		*x += 1;
		square(x, n);
	}
	else if (sq > n)
	{
		*x = -1;
	}
	else
	{
		*x = *x;
	}
	return (*x);
}
