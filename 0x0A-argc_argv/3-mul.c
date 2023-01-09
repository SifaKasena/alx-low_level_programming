#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: multiplies two numbers
 * @argc: number of arguments passed
 * @argv: array of passed arguments
 * Return: 0 - (success), 1 - Error
 */

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
