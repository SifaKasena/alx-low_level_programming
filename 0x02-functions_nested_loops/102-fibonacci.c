#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: Prints the first 50 fibonacci numbers
 * Return: always 0(success)
 */

int main(void)
{
	long i, prev, next, curr;

	prev = 1;
	next = 2;
	printf("%ld, %ld, ", prev, next);
	for (i = 1; i < 48; i++)
	{
		curr = next + prev;
		printf("%ld", curr);
		if (i == 47)
			break;
		printf(", ");
		prev = next;
		next = curr;
	}
	printf("\n");
}
