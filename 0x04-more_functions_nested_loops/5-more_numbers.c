#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14
 *
 */

void more_numbers(void)
{
	int num;
	int x;

	for (num = 0; num < 10; num++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}

}
