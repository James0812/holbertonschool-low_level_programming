#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
    int i, j, product, tens, ones;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;
            tens = product / 10;
            ones = product % 10;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');
                if (product < 10)
                    _putchar(' ');
            }

            if (product >= 10)
                _putchar(tens + '0');
            _putchar(ones + '0');
        }
        _putchar('\n');
    }
}

