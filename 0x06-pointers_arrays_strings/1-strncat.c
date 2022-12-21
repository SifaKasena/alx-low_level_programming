#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: maximum number of bytes to be used from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, destlen = 0;

	while (*(dest + destlen) != '\0')
		destlen++;
	for (i = 0; i < n; i++)
	{
		*(dest + destlen + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}

	return (dest);
}
