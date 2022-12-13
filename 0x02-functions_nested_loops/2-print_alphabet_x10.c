#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets 10 times
 * Return: always (0) success
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
	}
}
