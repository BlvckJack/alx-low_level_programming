#include <stdio.h>

/**
 * main - The entry point
 * Return: Always 0 (succes)
 */

int main(void)
{
	int ascii = 97;

	for (; ascii <= 122; ascii++)
	{
		putchar(ascii);
	}
	putchar('\n');

	return (0);
}
