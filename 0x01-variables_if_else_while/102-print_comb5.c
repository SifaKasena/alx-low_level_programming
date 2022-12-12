#include <stdio.h>

/**
 * main - entry point
 * Description: print unique combinations of double dogit numbers
 * Return: always (0) success
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (c > a || (c == a && d > b))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
					}
					if (a == '9' && b == '8')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
