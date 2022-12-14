#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack Bauer
 * Return: no return value
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(h+'0');
			_putchar(':');
			_putchar(m+'0');
		}
		_putchar('\n');
	}
}
