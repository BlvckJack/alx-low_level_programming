#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: Number to be checked
 * Return: Lat digit of a number
 */

int print_last_digit(int num)
{
	int n = _abs(num % 10);

	_putchar(n + '0');

	return (n);
}

/**
 * _abs - prints the sign of a number
 * @n: number to be checked
 *
 * Return: absolute value of a number
 */

int _abs(int n)
{
	return (n < 0 ? -n : n);
}
