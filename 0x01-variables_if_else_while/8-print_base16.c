#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always (0) success
 *
 */
int main(void)
{
	int n;

	for (n = '0'; n <= 'f'; n++)
	{
		if (n > '9' && n < 'a')
			n = 'a';
		putchar(n);
	}
	putchar('\n');
	return (0);
}
