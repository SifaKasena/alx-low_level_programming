#include "main.h"

/**
 * print_alphabet - prints all lowercase alphabets
 * Return: always (0) success
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
