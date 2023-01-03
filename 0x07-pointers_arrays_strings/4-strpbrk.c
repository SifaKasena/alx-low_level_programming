#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: set of bytes
 * Return: pointer to byte in s that matches any of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, state = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				state = 1;
				break;
			}
		}
		if (state)
			break;
		s++;
	}

	return (s);
}
