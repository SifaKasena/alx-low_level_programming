#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s++)
		_print_rev_recursion(s);
	if (*(s - 1) != '\0')
		_putchar(*(s - 1));
}
