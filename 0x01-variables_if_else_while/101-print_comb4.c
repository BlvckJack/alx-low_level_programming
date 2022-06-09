#include <stdio.h>

/**
 * main - The entry point
 * Return: Always 0 (succes)
 */

int main(void)
{
	int first, second, third;

	for (first = '0'; first < '8'; first++)
	{
		for (second = first + 1; second <= '8'; second++)
		{
			for (third = second + 1; third <= '9'; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);

				if (first == '7' && second == '8' && third == '9')
					;
				else
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
