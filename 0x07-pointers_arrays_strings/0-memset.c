#include "main.h"

/**
 * _memset - fills the first n bytes of memory pointed by s
 * with a constant byte b
 * @s: pointer to memory location
 * @b: constant byte to be used
 * @n: number of bytes to be filled
 * Return: poiter to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
