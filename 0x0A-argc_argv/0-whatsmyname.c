#include <stdio.h>

/**
 * main - entry point
 * Description: prints the program name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (success)
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
