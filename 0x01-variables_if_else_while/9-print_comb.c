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
		if (num == '9')
			;
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
