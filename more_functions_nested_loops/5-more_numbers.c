#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Description: Uses only three _putchar calls
 */
void more_numbers(void)
{
	int i, j;
	int tens, ones;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			tens = j / 10;
			ones = j % 10;

			if (tens > 0)
				_putchar(tens + '0'); /* first _putchar */

			_putchar(ones + '0');     /* second _putchar */
		}
		_putchar('\n');                /* third _putchar */
	}
}

