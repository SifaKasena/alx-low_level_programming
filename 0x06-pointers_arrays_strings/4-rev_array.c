#include "main.h"

/**
 * reverse_array - reverses a string
 * @a: array to be reversed
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, x, y, end;

	if (n % 2 == 0)
		end = n / 2;
	else
		end = n / 2 + 1;
	for (i = 0; i < end; i++)
	{
		x = *(a + i);
		y = *(a + n - 1 - i);
		*(a + i) = y;
		*(a + n - 1 - i) = x;
	}
}
