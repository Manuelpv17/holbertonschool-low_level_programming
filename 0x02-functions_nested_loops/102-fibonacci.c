#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 *
 */
int main(void)
{
	int i;
	long long int a = 1;
	long long int b = 2;
	long long int c;

	printf("%lld, %lld", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
