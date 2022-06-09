#include <stdio.h>

/**
 * main - The entry point
 * Return: Always 0 (succes)
 */

int main(void)
{
	int ascii = 122;

	for (; ascii >= 97; --ascii)
	{
		putchar(ascii);
	}
	putchar('\n');

	return (0);
}
