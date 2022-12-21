#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: an integer, 0 for equal; negative for less than; positive for greater than
 */

int _strcmp(char *s1, char *s2)
{
	int i, a, b;

	a = 0;
	b = 0;
	for (i = 0; *(s1 + i) != '\0'; i++)
		a += (int)s1[i];
	for (i = 0; *(s2 + i) != '\0'; i++)
		b += (int)s2[i];

	return (a - b);
}
