#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
