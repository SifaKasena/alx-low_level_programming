#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns pointer to first occurence of a character
 * @s: string to be checked
 * @c: character to look for
 * Return: pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;

	return (*s == '\0' ? NULL : s);
}
