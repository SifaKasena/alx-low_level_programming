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
		if (argv[i][0] < '0' || argv[i][0] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
