#include "main.h"

/**
 * _isupper - checks uppercase characters
 *
 * @c: the function parameter
 *
 * Return: 1 if it is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
