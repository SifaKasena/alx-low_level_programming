#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: string to be encoded
 * Return: pointer to resulting string
 */

char *leet(char *s)
{
	int i, n;
	char letters[] = "AEOTL";
	char replace[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < 5; n++)
		{
			if (letters[n] == s[i] || letters[n] == s[i] - 32)
			{
				s[i] = replace[n];
			}
		}
	}

	return (s);
}
