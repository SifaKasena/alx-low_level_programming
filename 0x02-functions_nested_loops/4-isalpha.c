#include "main.h"

/**
 * _isalpha - checks whether a character is an alphabetical character
 * @c: character to ne checked
 * Return: 1 - true; 0 - false
 */

int _isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}
