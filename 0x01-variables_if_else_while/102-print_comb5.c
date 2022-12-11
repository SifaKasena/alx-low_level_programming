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
				d = '0';
				while (((c == a && d > b) || c > a) && d <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d++);
					if (a == '9' && b == '8')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
