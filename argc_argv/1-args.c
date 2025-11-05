#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* argv is not used */

	printf("%d\n", argc - 1);
	return (0);
}

