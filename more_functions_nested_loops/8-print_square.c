#include "main.h"

/**
 * print_square - prints a square using '#' characters
 * @size: the size of the square
 */
void print_square(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < size; i++) /* loop over rows */
    {
        for (j = 0; j < size; j++) /* loop over columns */
        {

