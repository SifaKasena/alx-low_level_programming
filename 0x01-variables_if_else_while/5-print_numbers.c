#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always (0) success
 *
 */
int main(void)
{
	int n = 0;

	while (n < 10)
		printf("%d", n++);
	printf("\n");
	return (0);
}
