#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int i, n;
	char x, y;
	
	while (*(s + len) != '\0')
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = len / 2 + 1;
	for (i = 0; i < n; i++)
	{
		x = *(s + i);
		y = *(s + len - 1 - i);
		*(s + i) = y;
		*(s + len - 1 - i) = x;
	}
}
