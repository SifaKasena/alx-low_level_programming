#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always (0) success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			continue;
		else
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
