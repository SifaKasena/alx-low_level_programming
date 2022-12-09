#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always (0) Success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
