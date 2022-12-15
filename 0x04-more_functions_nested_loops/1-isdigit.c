#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks whether a character is a digit
 * @c: character to be checked
 * Return: 1 - true; 0 - false
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
