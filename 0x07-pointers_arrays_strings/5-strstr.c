#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to locate
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len, state;
	char cpy[100];

	i = len = state = 0;
	while (needle[len] != '\0')
		len++;
	while (haystack[i] != '\0')
	{
		for (j = 0; j < len; j++)
		{
			if (needle[j] != haystack[j + i])
				break;
			else if (j == len - 1)
				state = 1;
		}
		if (state || !len)
			break;
		i++;
	}
	return (*(haystack + i) == '\0' ? NULL : haystack + i);
}
