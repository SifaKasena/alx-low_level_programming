#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: string to be encoded
 * Return: pointer to resulting string
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
			case 'A':
			case 'a':
				s[i] = '4';
			case 'E':
			case 'e':
				s[i] = '3';
			case 'O':
			case 'o':
				s[i] = '0';
			case 'T':
			case 't':
				s[i] = '7';
			case 'L':
			case 'l':
				s[i] = '1';
		}
	}

	return (s);
}
