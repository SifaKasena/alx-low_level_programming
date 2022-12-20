#include <stdio.h>

/**
 * main -entry point
 * Description: Prints the largest prime factor of 612852475143
 * Return: always 0(success)
 */

int main(void)
{
	double num = 612852475143;
	double i;

	for (i = 2; i < num / 2; i++)
	{
		if (num / i == (long)(num / i))
		{
			if ((num / i) == 1)
				break;
			while (num / i == (long)(num / i))
				num /= i;
		}
	}
	printf("%ld\n", (long)num);
	return (0);
}
