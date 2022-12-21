#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination to copy to
 * @src: string to copy
 * @n: number of characters to copy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}
	for ( ; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
