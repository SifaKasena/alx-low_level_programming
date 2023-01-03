#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to locate
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len;
	char cpy[100];

	i = len = 0;
	while (needle[len] != '\0')
		len++;
	while (haystack[i++] != '\0')
	{
		for (j = 0; j < len; j++)
		{
			cpy[j] = *(haystack + j);
		}
		cpy[j] = '\0';
		if (cpy == needle)
			break;
	}

	return (haystack + i);
}
