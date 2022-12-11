#include <stdio.h>

/**
 * main - entry point
 * Description: print unique combinations of double dogit numbers
 * Return: always (0) success
 */
int main(void)
{
	int n;
	int i;

	for (n = '0'; n < '9'; n++)
	{
		for (i = '1'; i <= '9'; i++)
		{
			if (n != i && i > n)
			{
				putchar(n);
				putchar(i);
				if (n == '8' && i == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
