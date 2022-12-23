#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalised
 * Return: pointer to resulting string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		switch (s[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
		}
	}
	return (s);
}
