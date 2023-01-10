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
	int i, j, state, sum = 0;

	for (i = 1; i < argc; i++)
	{
		state = 1;
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				state = 0;
			j++;
		}
		if (!state)
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
