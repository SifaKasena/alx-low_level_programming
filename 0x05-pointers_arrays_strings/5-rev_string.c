#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	
	while (*(s + len) != '\0')
		len++;

	char s_cpy[len];

	for (i = 0; i < len; i++)
		*(s_cpy + i) = *(s + i);
	for (i = 0; i < len; i++)
	{
		*(s + i) = *(s_cpy + len - i - 1);
	}
}
