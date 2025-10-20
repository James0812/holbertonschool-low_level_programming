#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
    char c;
    char C;

    // Alphabet en minuscules
    for (c = 'a'; c <= 'z'; c++)
        putchar(c);

    // Alphabet en majuscules
    for (C = 'A'; C <= 'Z'; C++)
        putchar(C);

    // Nouvelle ligne à la fin
    putchar('\n');

    return 0;
}

