#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then in uppercase
 *
 * Return: 0 (success)
 */
int main(void)
{
    char c;
    char C;

    /* Print alphabet in lowercase */
    for (c = 'a'; c <= 'z'; c++)
        putchar(c);

    /* Print alphabet in uppercase */
    for (C = 'A'; C <= 'Z'; C++)
        putchar(C);

    /* Print newline */
    putchar('\n');

    return (0);
}

