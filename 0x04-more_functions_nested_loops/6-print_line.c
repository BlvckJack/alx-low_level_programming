#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: Line width
 */

void print_line(int n)
{
	int x = 0;

	do {
		_putchar('_');
		x++;
	} while (x <= n);
	_putchar('\n');
}
