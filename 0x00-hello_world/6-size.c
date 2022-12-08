#include <stdio.h>

/**
 *main - The entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char: %ld byte(s)\n", sizeof(char));
	printf("size of int: %ld byte(s)\n", sizeof(int));
	printf("size of long int: %ld byte(s)\n", sizeof(long int));
	printf("size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
