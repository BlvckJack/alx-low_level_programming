#include "main.h"

/**
 * _isalpha - checks if character is a letter
 * @c: charater to be checked
 *
 * Return: 1 if letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
