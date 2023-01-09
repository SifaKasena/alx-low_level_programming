#include <stdio.h>

/**
 * main - entry point
 * Description: prints the number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (success)
 */

int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc);
	return (0);
}
