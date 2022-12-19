#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i, len = 0;
	
	while (*(str + len) != '\0')
		len++;
	for (i = (len / 2) + 1; i < len; i++)
		_putchar(*(str + i));
}
