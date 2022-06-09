#include "main.h"

/**
 * print_alphabet_x10 - a counter for print_alphabet
 *
 */
void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count <= 9; count++)
		print_alphabet();
}

/**
 * print_alphabet - prints alphabets in lowercase
 */

void print_alphabet(void)
{
	int start = 97;

	do {
		_putchar(start++);
	} while (start <= 122);

	_putchar('\n');
}
