#include <stdio.h>

/**
 *main - The entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char: %ld byte(s)", sizeof(char));
	printf("size of int: %ld byte(s)", sizeof(int));
	printf("size of long int: %ld byte(s)", sizeof(long int));	
	printf("size of long long int: %ld byte(s)", sizeof(long long int));
	printf("size of float: %ld byte(s)", sizeof(float));
	return (0);
}
