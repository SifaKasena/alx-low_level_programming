#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: The fizz buzz test
 * Return: always (0) success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("Buzz\n");
		else if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}

	return (0);
}
