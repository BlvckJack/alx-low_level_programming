#include <stdio.h>

/**
 * main - The entry point
 * Return: Always 0 (succes)
 */

int main(void)
{
	int num = '0';
	int hex = 97;

	for (; num <= '9'; num++)
		putchar(num);
	for (; hex <= 102; hex++)
		putchar(hex);

	putchar('\n');

	return (0);
}
