#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, destlen = 0;

	while (*(dest + destlen) != '\0')
		destlen++;
	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + destlen + i) = *(src + i);
	*(dest + destlen + i) = '\0';

	return (dest);
}
