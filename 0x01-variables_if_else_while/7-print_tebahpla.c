#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always (0) success
 *
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}
