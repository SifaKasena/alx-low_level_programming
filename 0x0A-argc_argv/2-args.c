#include <stdio.h>

/**
 * main - entry point
 * Description: prints all the arguments it receives
 * @argc: n umber of arguments passed
 * @argv: array of arguments
 * Return: always 0 (success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
