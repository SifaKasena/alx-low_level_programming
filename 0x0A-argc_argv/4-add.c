#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: adds two positive numbers
 * @argc: number of arguments passed
 * @argv: array of passed arguments
 * Return: 0 - Success, 1 - Error
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
