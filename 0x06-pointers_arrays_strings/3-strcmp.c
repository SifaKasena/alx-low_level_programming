#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: an integer, 0 for equal; negative for less than;
 * positive for greater than
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return ((int)(s1[i] - s2[i]));
	}

	return (0);
}
