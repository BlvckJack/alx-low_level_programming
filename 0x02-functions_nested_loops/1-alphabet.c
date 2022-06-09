#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 */


void print_alphabet(void)
{
	int start = 97;

	do {
		_putchar(start++);
	} while (start <= 122);

	_putchar('\n');

}
