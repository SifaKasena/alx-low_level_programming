#inculde <stdio.h>

/**
 * main - entry point
 *
 * Return: always (0) success
 *
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((char) n);
	putchar('\n');
	return (0);
}
