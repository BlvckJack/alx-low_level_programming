#include <stdio.h>

/**
 * main - The entry point
 * Return: Always 0 (succes)
 */

int main(void)
{
	int num = '0';

	for (; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
