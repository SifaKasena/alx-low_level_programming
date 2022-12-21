#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: Prints the first 50 fibonacci numbers
 * Return: always 0(success)
 */

int main(void)
{
	long i, prev, next, curr, sum;

	prev = 1;
	next = 2;
	sum = next;
	for (i = 1; next + prev <= 4000000; i++)
	{
		curr = next + prev;
		if (i % 2 == 0)
			sum += curr;
		prev = next;
		next = curr;
	}
	printf("%d\n", sum);

	return (0);
}
