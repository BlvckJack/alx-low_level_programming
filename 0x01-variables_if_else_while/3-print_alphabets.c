#include <stdio.h>

/**
 * main - The entry point
 * Return: Always 0 (succes)
 */

int main(void)
{
	int lower = 97;
	int upper = 65;

	for (; lower <= 122; lower++)
		putchar(lower);

	for (; upper <= 90; upper++)
		putchar(upper);

	putchar('\n');

	return (0);
}
