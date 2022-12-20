#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: prints the sum of multiples of 3 or five below 1024
 * Return: always 0(success)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
