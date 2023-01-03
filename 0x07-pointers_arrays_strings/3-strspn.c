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
	unsigned int i, j, state = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
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
		if (state)
			break;
	}

	return (i);
}
