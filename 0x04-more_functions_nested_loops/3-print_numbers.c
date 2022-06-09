#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 *
 */

void print_numbers(void)
{
	int num = 48;

	do {
		_putchar(num++);
	} while (num <= 57);

	_putchar('\n');
}
