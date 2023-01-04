#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: main string
 * @accept: substring
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, state;

	i = j = state = 0;
	for ( ; s[i] != '\0'; i++)
	{
		j = 0;
		for ( ; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				state = 1;
				break;
			}
		}
		if (state || accept[0] == '\0')
			break;
	}

	return (i);
}
