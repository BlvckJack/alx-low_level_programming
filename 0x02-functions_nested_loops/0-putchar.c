#include "main.h"

/**
 * main - Entry point
 *
 * Return: On success 0.
 */


int main(void)
{
	char *str = "_putchar\n";

	do {
		_putchar(*str++);
	} while (*str != '\0');

	return (0);
}
