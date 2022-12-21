#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: Prints the first 50 fibonacci numbers
 * Return: always 0(success)
 */

int main(void)
{
	float i, prev, next, curr;

	prev = 1;
	next = 2;
	printf("%.0f, %.0f, ", prev, next);
	for (i = 0; i < 96; i++)
	{
		curr = next + prev;
		printf("%.0f", curr);
		if (i == 95)
			break;
		printf(", ");
		prev = next;
		next = curr;
	}
	printf("\n");

	return (0);
}
