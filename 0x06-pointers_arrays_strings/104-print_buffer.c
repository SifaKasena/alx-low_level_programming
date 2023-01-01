#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints contents of size bytes pointed by b
 * @b: pointer to beginning of buffer
 * @size: number of bytes to be printed
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x, y, buff = 0;

	if (size > 0)
	{
		while (buff < size)
		{
			printf("%08x: ", buff);
			for (x = buff; x < buff + 10; x += 2)
			{
				if (x >= size)
					printf("  ");
				else
					printf("%02x", b[x]);
				if (x + 1 >= size)
					printf("   ");
				else
					printf("%02x ", b[x + 1]);
			}
			for (y = buff; y < buff + 10; y += 2)
			{
				if (y >= size)
					break;
				if (b[y] < 32)
					b[y] = '.';
				printf("%c", b[y]);
				if (y + 1 >= size)
					break;
				if (b[y + 1] < 32)
					b[y + 1] = '.';
				printf("%c", b[y + 1]);
			}
			printf("\n");
			buff = buff + 10;
		}
	}
	else
	{
		printf("\n");
	}
}
