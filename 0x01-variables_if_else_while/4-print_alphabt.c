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
		if (ascii == 113 || ascii == 101)
			;
		else
			putchar(ascii);
	}
	putchar('\n');

	return (0);
}
