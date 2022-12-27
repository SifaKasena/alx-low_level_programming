#include "main.h"

/**
 * rot13 - encodes string into rot13
 * @s: string to be encoded
 * Return: pointer to resulting string
 */

char *rot13(char *s)
{
	int i, n;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char replace[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s[i] == letters[n])
			{
				s[i] = replace[n];
				break;
			}
		}
	}

	return (s);
}
