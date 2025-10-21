#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
        _putchar(c);

    _putchar('\n');
}

/**
 * main - calls the print_alphabet function
 * Return: 0
 */
int main(void)
{
    print_alphabet();
    return (0);
}

