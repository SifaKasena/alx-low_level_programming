#include "main.h"

/**
 * infinite_add - adds two numbers given as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of buffer to store result
 * Return: char pointer to result, 0 if size of result is greater than size_r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, big, n1_len, n2_len, r_len, n;
	char a, b, add, dig, rem, x, y;

	i = n1_len = n2_len = rem = 0;
	for (i = 0; n1[i] != '\0'; i++)
		n1_len = i;
	for (i = 0; n2[i] != '\0'; i++)
		n2_len = i;
	big = n1_len >= n2_len ? n1_len : n2_len;
	if (size_r <= big + 1)
		return (0);
	for (i = 0; n2_len >= 0 || n1_len >= 0 || rem != 0; i++)
	{
		a = b = 0;
		if (n1_len >= 0)
			a = n1[n1_len--] - '0';
		if (n2_len >= 0)
			b = n2[n2_len--] - '0';
		add = a + b + rem;
		dig = (add % 10) + '0';
		rem = add / 10;
		r[i] = dig;
	}
	r[i] = '\0';
	for (i = 0; r[i] != '\0'; i++)
		r_len = i;
	if (r_len % 2 == 0)
		n = r_len / 2;
	else
		n = r_len / 2 + 1;

	for (i = 0; i < n; i++)
	{
		x = r[i];
		y = *(r + r_len - i);
		r[i] = y;
		*(r + r_len - i) = x;
	}
	return (r_len + 1 < size_r ? r : 0);
}
