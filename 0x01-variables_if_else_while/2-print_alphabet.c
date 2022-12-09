#include <stdio.h>

/**
 * main - Entry point
 *
 * turn: always (0) Success
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
