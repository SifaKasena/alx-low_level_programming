#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an int
 * @s: string to be converted
 * Return: resulting integer
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int num = 0;
	int state = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			break;
		if (sign == 1 && s[i] == '-')
			sign = -1;
		else if (sign == -1 && s[i] == '-')
			sign = 1;
		i++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num += s[i] - 48;
			state = 1;
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				num *= 10;
		}
		else if (state == 1)
		{
			break;
		}
	}
	return (sign * num);
}
