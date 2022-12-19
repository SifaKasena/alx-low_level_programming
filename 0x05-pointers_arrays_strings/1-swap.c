#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to first integer to be swapped
 * @b: pointer to second integer to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
