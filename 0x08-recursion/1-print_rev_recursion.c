#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int s_len = 0;

	while (s[s_len] != '\0')
		s_len++;
	s = s + s_len - 1;

	_putchar(*s);
}
