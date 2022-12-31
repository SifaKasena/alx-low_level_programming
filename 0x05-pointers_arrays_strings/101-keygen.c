#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
	char c;
	char pass[50];
	int i = 0, sum = 0;

	srand(time(NULL));
	while (sum < 2772)
	{
		if (sum >= 2646){
			c = 2772 - sum;
			pass[i] = c;
			i++;
			break;
		}
		c = rand() % 93 + 33;
		pass[i] = c;
		sum += c;
		i++;
	}
	pass[i] = '\0';
	printf("%s\n", pass);

	return (0);
}
