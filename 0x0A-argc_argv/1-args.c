#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argv: argv
 * @argc: argc
 * Return: Number of arguments
 */
int main(int argc, char *argv[]__attribute__((__unused__)))
{
	printf("%d\n", argc - 1);

	return (argc);
}
