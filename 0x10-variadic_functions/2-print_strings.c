#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: strings passed to the function
 * Return: prints strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s = NULL;
	va_list strings;

	if (separator == NULL || n == 0)
	return;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i == n - 1)
			break;
		printf("%s", separator);
	}
	printf("\n");

}
