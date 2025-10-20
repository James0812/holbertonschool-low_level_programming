#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
    char c;
    char C;

    /* Alphabet in lowercase */
    for (c = 'a'; c <= 'z'; c++)
        putchar(c);

    /* Alphabet in uppercase */
    for (C = 'A'; C <= 'Z'; C++)
        putchar(C);

    /* Newline at the end */
    putchar('\n');

    return 0;
}

