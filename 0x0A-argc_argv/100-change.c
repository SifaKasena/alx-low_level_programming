#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of arguments
 * @argv: array of passed arguments
 * Return: 0 - success, 1 - Error
 */

int main(__attribute__((unused))int argc, char **argv)
{
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		coins += atoi(argv[1]) / 25;
		coins += (atoi(argv[1]) % 25) / 10;
		coins += (atoi(argv[1]) % 25 % 10) / 5;
		coins += (atoi(argv[1]) % 25 % 10 % 5) / 2;
		coins += atoi(argv[1]) % 25 % 10 % 5 % 2;
		printf("%d\n", coins);
	}

	return (0);
}
