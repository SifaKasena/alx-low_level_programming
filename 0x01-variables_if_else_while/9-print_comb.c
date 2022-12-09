#include <stdio.h>

/**
 * main - entry point
 * Description: print all combinations of single digits
 * Return: always (0) success
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
