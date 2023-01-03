#include "main.h"

/**
 * _strchr - returns pointer to first occurence of a character
 * @s: string to be checked
 * @c: character to look for
 * Return: pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
		s++;

	return (s);
}
