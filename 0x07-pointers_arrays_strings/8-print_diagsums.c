#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of a
 * square matrix of integers
 * @a: pointer to beginning of matrix
 * @size: matrix size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, num1, num2, sum1, sum2;

	sum1 = sum2 = 0;
	for (i = 0; i < size; i++)
	{
		num1 = *(a + (i * size + i));
		num2 = *(a + (i * size + size - 1 - i));
		sum1 += num1;
		sum2 += num2;
	}

	printf("%d, %d\n", sum1, sum2);
}
