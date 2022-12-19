#include "main.h"

/**
 * _strcpy - copies a sting pointed by src to buffer pointed by dest
 * @dest: the destination to copy to
 * @src: the source to copy from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		*(dest + i) = *(src + i);
		i++;
	} while (*(src + i) != '\0');

	return (dest);
}
